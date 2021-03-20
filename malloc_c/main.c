#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;

    /* Initial memory allocation */
   str = (char *) malloc(15);
   printf("%d\n",sizeof(str));
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);
   printf("===========================\n");
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    // if memory cannot be allocated
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);

    // deallocating the memory
    free(ptr);
    return 0;
}
