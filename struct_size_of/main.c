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
  printf("%d %d %d", sizeof(e1.id), sizeof(e1.name), sizeof(e1));
  return(0);
}

//https://stackoverflow.com/questions/1841863/size-of-struct-in-c
