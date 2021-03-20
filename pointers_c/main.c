#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  var1;
   char var2[10];

   printf("Address of var1 variable: %x\n", &var1  );
   printf("Address of var2 variable: %x\n", &var2  );
   printf("Address of var2 variable: %x\n", &var2[0]  );
   printf("Address of var2 variable: %x\n", &var2[1]  );
   printf("Address of var2 variable: %x\n", &var2[2]  );
   printf("Address of var2 variable: %x\n", &var2[3]  );
   printf("Address of var2 variable: %x\n", &var2[4]  );

   printf("=====================================\n");

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/
   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

    //https://www.tutorialspoint.com/cprogramming/c_pointers.htm
    return 0;
}
