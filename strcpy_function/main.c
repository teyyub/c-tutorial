#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20] = "C programming";
    char str2[20];

    strcpy(str2, str1);
    printf("%s\n",str2);
    puts(str2); // C programming
    return 0;
}
