#include <stdio.h>
struct employee
{
  int id;
  char name[30];
};

int main()
{
  struct employee e1;
  //e1.name menimsedib yoxlamaqda olar heleki biklmirem
  //
  printf("%d %d %d", sizeof(e1.id), sizeof(e1.name), sizeof(e1));
  return(0);
}

//https://stackoverflow.com/questions/1841863/size-of-struct-in-c
//https://www.edureka.co/blog/understanding-structures-and-padding-in-c/#:~:text=For%20'int'%20and%20'double,entire%20structure%20is%208%20bytes.
