#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val =10;
    float number1 = 13.5;
    double number2 = 12.4;
    char chr = 'a';

    printf("val = %d\n",val);
    printf("val = %f\n",number1);
    printf("val = %lf\n",number2);
    printf("character = %c\n", chr);

    //padding elemek

    int space = 40;
    printf("%*d\n", space,val);
    //new line diqqet
    printf("%*s\n", space, "Hello");
    printf("%*d\n", space, 10);
    printf("%*c\n", space, 'x');
    char *ptr = "Hello World";
    printf("%40s\n", ptr);

    //Printing leading 0's in C
    //padding with zeros
    //https://stackoverflow.com/questions/153890/printing-leading-0s-in-c#:~:text=printf(%22%05d%22%2C,E.g.%2C%2006%20instead%20of%206%20.
    printf("%05d\n", 101);//leftde 5 sifir
    printf("%*d\n", 30,10); //30 space qoymaq ucun
    printf("%05d\n", 101);
    printf("%020d\n", 101); //left de 20 sifir
    printf("%.5d\n", 123);

    printf("%05d\n", -123);  // outputs -0123 (pad to 5 characters)
    printf("%.5d\n", -123);  // outputs -00123 (pad to 5 digits)


    int width = 5;
    printf("%0*d\n", width, 123);  // outputs 00123
    printf("%.*d\n", width, 123);  // outputs 00123


    //printf haqqinda https://www.cypress.com/file/54441/download
    return 0;
}

//padding
//printf alternatives

//https://stackoverflow.com/questions/293438/left-pad-printf-with-spaces
