#include <stdio.h>
#include <stdlib.h>
struct Books {
   char *title;
   char *author;
   char *subject;
   int id;
};
void printBook(struct Books book);
int main()
{
    struct Books book, book1;
    book.title="c programming";
    book.author="teyyub";
    book.subject="ne geldi";
    book.id=6;
    book1.title="java programming";
    book1.author="teyyub";
    book1.subject="ne gelmedi";
    book1.id=61;
    printBook(book);
    printBook(book1);
    return 0;
}
void printBook(struct Books book){
    printf("%s\n",book.title);
    printf("%s\n",book.author);
    printf("%s\n",book.subject);
    printf("%d\n",book.id);
}

//https://overiq.com/c-programming-101/pointers-as-structure-member-in-c/
