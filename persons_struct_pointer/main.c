#include <stdio.h>
//#include <stdlib.h>
struct Person
{
   int age;
   float weight;
};

int main()
{
    struct Person *person, person1;
    person = &person1;
    scanf("%d", &person->age);
    printf("Age: %d\n", person->age);
    return 0;
}
