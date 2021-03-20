#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
/* Node Stucture */
typedef struct Movie {
//    int data;
//    char *name;
    int id;
    char* title;
    char* director;
    int year;
    struct Movie *next;
} ;//Node ;

struct node *head = NULL;
//struct node *current = NULL;

/* Function Declarations */
int update(int id, const char* title, const char* director);
void sort();
struct Movie * insert_top(int id, char *title, char*director, int year ) {
    struct Movie *new_node;
    new_node = (struct Movie *) malloc(sizeof(struct Movie));
    new_node->id = id;
    new_node->title=title;
    new_node->director=director;
    new_node->year=year;
    new_node->next= head;
    head = new_node;
    return head;
}
int update(int id, const char* title, const char* director){

    int count = 0;
    int return_year;
    struct Movie *temp;
    temp = head;
    bool found = false;
    while(temp != NULL) // Start traversing from head node
    {
        if(temp -> id == id)
        {
            found = true;
            break;
        }
        else
        {
            count = count + 1;
            temp = temp -> next;

        }}
    if(found) {
        if(temp->title!=title){
            temp->title = title;
            temp->director=director;
            temp->year=0;
            return_year = 0;
        }
    } else {
        insert_top(id, title,director,0 );
    }

 return 0;
}

void print() {
    struct Movie *current_node = head;
    while ( current_node != NULL) {
        printf("%d ", current_node->id);
        printf("%s ", current_node->title);
        printf("%s ", current_node->director);
        printf("%d ", current_node->year);
        current_node = current_node->next;
        printf("\n");
    }
}

int main() {

    insert_top(5, "kinozavr","puskin",2000 );
    insert_top(51, "kinozavr1","puskin1",2051 );
    insert_top(15, "kinozavr15","puskin15",2015 );
    insert_top(155, "kinozavr155","puskin155",2115 );
    update(519, "kinozavr11","puskin11");
    update(519, "kinozavr519","puskin11");
    print();
    printf("after sorted\n");
    sort();
    print();
    return 0;
}
void sort(){
    struct Movie *t;
    struct Movie *s;
    struct Movie *temp;
    t=head;
    int x, year;
    char *title,*director;
    while(t!=NULL)
    {
        s=t->next;
        while(s!=NULL)
        {
            if(t->id>s->id)
            {
                x=t->id;
                year = t->year;
                title = t->title;
                director =t->director;
                //
                t->id=s->id;
                t->year = s->year;
                t->title = s->title;
                t->director = s->director;
                s->id=x;
                s->year=year;
                s->title = title;
                s->director = director;
               // temp = t;
//                printf("temp.id =  %d\n",temp->id);
//                printf("temp.title = %s\n",temp->title);
               // t=s;
//                printf("t.id = %d\n",t->id);
//                printf("t.title = %s\n",t->title);
               // s=temp;
//                printf("s.id = %d\n",s->id);
//                printf("s.title = %s\n",s->title);
            }
            s=s->next;
        }
        t=t->next;
    }
    t=head;
    while(t!=NULL)
    {
//        printf(" %d ",t->id);
        t=t->next;
    }


}

//https://www.tutorialride.com/c-linked-list-programs/create-and-sort-a-single-linked-list-c-program.htm