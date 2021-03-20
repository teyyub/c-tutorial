#include <iostream>

using namespace std;

const char *admin = "Administrator";
const char *mng = "Manager";
const char *prog = "Programmer";

struct employee {
    char *name;
    char title[20];
    char id[8];
    int yearsExp;
};

typedef struct employee emp_t;

emp_t *everyone[1];

emp_t *create_emp(const char *name,const char *title,const char *id,int yrxp) {
    emp_t *new1;

    new1 = (emp_t *) malloc(sizeof(emp_t));
    new1->name = (char*) malloc(strlen(name) + 1);
    strcpy(new1->name,name);
    strcpy(new1->title,title);
    strcpy(new1->id,id);
    new1->yearsExp = yrxp;
    return new1;
}
void free_emp(emp_t *employee) {
    free(employee->name);
    free(employee);
}
int main()
{
    int i;

    everyone[0] = create_emp("Mike Papamichail",prog,"A197482",3);
    everyone[1] = create_emp("Maria Mamalaki",mng,"Z104781",6);

    for(i = 0; i < 2;i++) {
        printf("%15s \t %15s \t %10s \t %4d\n",
        everyone[0]->name,everyone[0]->title,everyone[0]->id,everyone[0]->yearsExp);
        free_emp(everyone[i]);
        everyone[i] = NULL;
    }
    return 0;
}
