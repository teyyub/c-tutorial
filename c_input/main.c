#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testInteger;
    float num1;
    double num2;

     char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);
    printf("You entered %c.\n", chr);
    printf("You entered %d.\n", chr); //ascii
    //When a character is entered by the user in the above program,
    //the character itself is not stored.
    //Instead, an integer value (ASCII value) is stored.
    //And when we display that value using %c text format,
    //the entered character is displayed. If we use %d to display the character,
    //it's ASCII value is printed.

    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    printf("Number = %d\n",testInteger);

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);


    int a;
    float b;

    printf("Enter integer and then a float: ");

    // Taking multiple inputs
    scanf("%d%f", &a, &b);

    printf("You entered %d and %f", a, b);

    return 0;
}
