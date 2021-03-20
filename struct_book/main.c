#include <stdio.h>
#include <stdlib.h>
struct Books {
   char *title;
   char *author;
   char *subject;
   int id;
  struct Books *next;
};
void print(struct Books *head);
//struct Books* addBook(char *title ,char *author, char *subject,
//                      int id, struct Books *head);
struct Books* addBook1(struct Books *book, struct Books *head);
void printBook(struct Books *book);
int main()
{
    struct Books *head = NULL;
    struct Books *book, book1;//, *book1;
    book = &book1;
    book1.title="c programming";
    book1.author="teyyub";
    book1.subject="ne geldi";
    book1.id=6;
    head = addBook1(book,head);
    print(head);
    //addBook("title1","author1","subject1",11,book);
    //print(book);
//     scanf("%d\n",&book->id);
//     printf("Id: %d\n", book->id);
//    book1->title="java programming";
//    book1->author="teyyub";
//    book1->subject="ne gelmedi";
//    book1->id=61;
   // printBook(book);
    //printBook(book1);
    return 0;
}
void printBook(struct Books *book){
    printf("%s\n",book->title);
    printf("%s\n",book->author);
    printf("%s\n",book->subject);
    printf("%d\n",book->id);
}
//struct Books* addBook(char *title ,char *author, char *subject,
//                      int id, struct Books *head){
//  struct Books *new_node , new_node1;
//     new_node = &new_node1;
//     new_node = (struct Books *) malloc(sizeof(struct Books));
//     new_node1.id = id;
//     new_node1.title = title;
//     new_node1.author = author;
//     new_node1.subject = subject;
//     new_node->next= head;
//     head = new_node;
//  return head;
//}
/* Print all the elements in the linked list */

struct Books* addBook1(struct Books *book, struct Books *head){
struct Books *new_node , new_node1;
    // new_node = (struct Books *) malloc(sizeof(struct Books));
     new_node = &new_node1;
     new_node1.id = book->id;
     new_node1.title = book->title;
     new_node1.author = book->author;
     new_node1.subject = book->subject;
     new_node->next= head;
     head = new_node;
     //new_node->next = NULL;
  return head;
};

void print(struct Books *head1) {
//  struct Books *current_node = head1;
  while ( head1 != NULL) {
      printf("salam");
//    printf("%d ", current_node->id);
      head1 = head1->next;
  }
}

//https://overiq.com/c-programming-101/pointers-as-structure-member-in-c/
//https://www.programiz.com/c-programming/c-structures-pointers
