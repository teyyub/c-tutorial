 #include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Movie
{
    //int val;
    int id;
    //char* title;
    //char* director;
    int year;
    //struct test_struct *next;
    Movie* next;
};

//struct test_struct *head = NULL;
//struct test_struct *curr = NULL;

struct Movie * head = NULL;
struct Movie * curr = NULL;
struct Movie* create_list(int id ,char* title,char* director,int year)
{
    printf("\n creating list with");
    struct Movie *ptr = (struct Movie*)malloc(sizeof(struct Movie));
    if(NULL == ptr)
    {
        printf("\n Memory creation failed \n");
        return NULL;
    }
    //ptr->val = val;
    ptr->id = id;
    //ptr->title = title;
    //ptr->director = director;
    ptr->year = year;
    ptr->next = NULL;

    head = curr = ptr;
    return ptr;
}
struct Movie* add_to_list(int id,char* title , char* director, int year)
{
    if(NULL == head)
    {
        return (create_list(id,title,director,year));
    }

   /*if(add_to_end)
        printf("\n Adding node to end of list with value [%d]\n",val);
    else
        printf("\n Adding node to beginning of list with value [%d]\n",val);
    */

    struct Movie *ptr = (struct Movie*)malloc(sizeof(struct Movie));
    if(NULL == ptr)
    {
        printf("\n Node creation failed \n");
        return NULL;
    }
    ptr->id = id;
   // ptr->title = title;
    //ptr->director = director;
    ptr->year = year;
    ptr->next = NULL;

    //if(add_to_end)
    {
        curr->next = ptr;
        curr = ptr;
    }
    /*else
    {
        ptr->next = head;
        head = ptr;
    }*/
    return ptr;
}

/*struct test_struct* create_list(int val)
{
    printf("\n creating list with headnode as [%d]\n",val);
    struct test_struct *ptr = (struct test_struct*)malloc(sizeof(struct test_struct));
    if(NULL == ptr)
    {
        printf("\n Node creation failed \n");
        return NULL;
    }
    ptr->val = val;
    ptr->next = NULL;

    head = curr = ptr;
    return ptr;
}*/
/*struct test_struct* add_to_list(int val, bool add_to_end)
{
    if(NULL == head)
    {
        return (create_list(val));
    }

    if(add_to_end)
        printf("\n Adding node to end of list with value [%d]\n",val);
    else
        printf("\n Adding node to beginning of list with value [%d]\n",val);

    struct test_struct *ptr = (struct test_struct*)malloc(sizeof(struct test_struct));
    if(NULL == ptr)
    {
        printf("\n Node creation failed \n");
        return NULL;
    }
    ptr->val = val;
    ptr->next = NULL;

    if(add_to_end)
    {
        curr->next = ptr;
        curr = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
    return ptr;
}*/

struct Movie* search_in_list(int val, struct Movie **prev)
{
    struct Movie *ptr = head;
    struct Movie *tmp = NULL;
    bool found = false;

    printf("\n Searching the list for value [%d] \n",val);

    while(ptr != NULL)
    {
        if(ptr->id == val)
        {
            found = true;
            break;
        }
        else
        {
            tmp = ptr;
            ptr = ptr->next;
        }
    }

    if(true == found)
    {
        if(prev){
            *prev = tmp;
            //prev->year=1000;
        }

        return ptr;
    }
    else
    {
        return NULL;
    }
}

/*int delete_from_list(int val)
{
    struct test_struct *prev = NULL;
    struct test_struct *del = NULL;

    printf("\n Deleting value [%d] from list\n",val);

    del = search_in_list(val,&prev);
    if(del == NULL)
    {
        return -1;
    }
    else
    {
        if(prev != NULL)
            prev->next = del->next;

        if(del == curr)
        {
            curr = prev;
        }
        else if(del == head)
        {
            head = del->next;
        }
    }

    free(del);
    del = NULL;

    return 0;
}*/

void print_list(void)
{
    struct Movie *ptr = head;

    printf("\n -------Printing list Start------- \n");
    while(ptr != NULL)
    {
       // printf("\n [%d] \n",ptr->val);
        printf("\n id of movie %d",ptr->id);
        //printf("\n title of movie %s",ptr->title);
        //printf("\n director of movie %s",ptr->director);
        printf("\n year of movie %d",ptr->year);
        ptr = ptr->next;
    }
    printf("\n -------Printing list End------- \n");

    return;
}

int main(void)
{
//    int i = 0, ret = 0;
    struct Movie *ptr = NULL;

    //print_list();

    //for(i = 0; i<3; i++)
    //int id,char* title , char* director, int year,
    add_to_list(100,(char*)"Amelie",(char*)"jack",2000);
    add_to_list(101,(char*)"Titanik",(char*)"rus", 2001);
    //add_to_list(102,(char*)"Pearl Harbor",(char*)"me",2020,true);
    print_list();

     ptr = search_in_list(100, NULL);

     if(NULL == ptr)
        {
            printf("\n Search failed, no such element found\n");
        }
        else
        {
            printf("\n Search passed\n",ptr->id);
        }

   /* for(i = 4; i>0; i--)
        add_to_list(i,false);

    print_list();*/

   /* for(i = 1; i<2; i += 1)
    {
        ptr = search_in_list(i, NULL);
        if(NULL == ptr)
        {
            printf("\n Search [val = %d] failed, no such element found\n",i);
        }
        else
        {
            printf("\n Search passed [val = %d]\n",ptr->val);
        }

        print_list();

        ret = delete_from_list(i);
        if(ret != 0)
        {
            printf("\n delete [val = %d] failed, no such element found\n",i);
        }
        else
        {
            printf("\n delete [val = %d]  passed \n",i);
        }

        print_list();
    }*/

    return 0;
}
