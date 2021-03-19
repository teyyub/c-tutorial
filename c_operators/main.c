#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 9,b = 4, c;
    double c1;
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);

    c1 = a/b;
    printf("a/b = %d \n",c1);
    printf("a/b = %f \n",c1);
    printf("a/b = %lf \n",c1);
    //yuxaridakilara diqqet

    float f1 = 4;
    c1 = a/f1;
    printf("a/f1 = %f \n",c1);
    return 0;

    //https://www.programiz.com/c-programming/c-operators
    //
}
