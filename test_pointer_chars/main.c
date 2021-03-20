#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[50];// = "Hello World"; // array version
    char *names;// = "Hello World";  // pointer version
    strcpy(arr,"salam");
    //names = "salam birde sdfsdjkfh skjdfhdjkfhgsdjfksdgfjhsdgfjhsdfg";
    names =(char*)malloc(2); //bunu anlamadim
    names = "teyyub";
    printf("%s\n",arr);
    printf("%s\n",names);
    return 0;
}
//https://overiq.com/c-programming-101/character-array-and-character-pointer-in-c/
