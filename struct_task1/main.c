#include <stdio.h>
#include <stdlib.h>
 typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;

/* function declaration */
void printBook(  Book book );

int main()
{
        Book book,book1, book2;

       strcpy( book.title, "C Programming");
       strcpy( book.author, "Nuha Ali");
       strcpy( book.subject, "C Programming Tutorial");
       book.book_id = 6495407;

       strcpy( book1.title, "Java Programming");
       strcpy( book1.author, "Teyyub Aliyev");
       strcpy( book1.subject, "Java Programming Tutorial");
       book1.book_id = 6495512;

      //bele islemeyecek
     //   book2.title= "Java Programming";
     //   book2.author= "Teyyub Aliyev";
     //   book2.subjec= "Java Programming Tutorial";
     //   book2.book_id = 6495500

       printf( "Book title : %s\n", book.title);
       printf( "Book author : %s\n", book.author);
       printf( "Book subject : %s\n", book.subject);
       printf( "Book book_id : %d\n", book.book_id);
       printf("====================\n");
       printf( "Book title : %s\n", book1.title);
       printf( "Book author : %s\n", book1.author);
       printf( "Book subject : %s\n", book1.subject);
       printf( "Book book_id : %d\n", book1.book_id);

       printf("====================\n");
       printf("with a function \n");
       printBook(book);
       printBook(book1);


//       printf( "Book title : %s\n", book2.title);
//       printf( "Book author : %s\n", book2.author);
//       printf( "Book subject : %s\n", book2.subject);
//       printf( "Book book_id : %d\n", book2.book_id);
    return 0;
}
void printBook(Book book){
       printf("====================\n");
       printf( "Book title : %s\n", book.title);
       printf( "Book author : %s\n", book.author);
       printf( "Book subject : %s\n", book.subject);
       printf( "Book book_id : %d\n", book.book_id);
}
