#include <stdio.h>
#include <stdlib.h>
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
}Book;
int main()
{
       Book book,book1;

       strcpy( book.title, "C Programming");
       strcpy( book.author, "Nuha Ali");
       strcpy( book.subject, "C Programming Tutorial");
       book.book_id = 6495407;

       strcpy( book1.title, "Java Programming");
       strcpy( book1.author, "Teyyub Aliyev");
       strcpy( book1.subject, "Java Programming Tutorial");
       book1.book_id = 6495512;

       printf( "Book title : %s\n", book.title);
       printf( "Book author : %s\n", book.author);
       printf( "Book subject : %s\n", book.subject);
       printf( "Book book_id : %d\n", book.book_id);
       printf("====================\n");
       printf( "Book title : %s\n", book1.title);
       printf( "Book author : %s\n", book1.author);
       printf( "Book subject : %s\n", book1.subject);
       printf( "Book book_id : %d\n", book1.book_id);
    return 0;
}
