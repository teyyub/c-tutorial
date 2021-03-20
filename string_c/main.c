#include <stdio.h>
#include <stdlib.h>

int main()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting );
    printf("%d",strlen(greeting));
    return 0;
}
//https://www.tutorialspoint.com/cprogramming/c_strings.htm
//burdan oxumaga davam etmek olar
//https://www.tutorialspoint.com/c_standard_library/c_function_memcpy.htm
//https://stackoverflow.com/questions/2898364/strcpy-vs-memcpy
