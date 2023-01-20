#include <stdio.h>
#include <string.h>

typedef struct empolye
{
    char name[20];
    int id;
    float sc;
} emp;

void pr(emp e1);

int main()
{
emp e1;
emp *ptr;
ptr = &e1;
strcpy(ptr->name,"anand");
ptr->id = 89;
ptr->sc = 266.23;
pr(e1);
return 0 ;
}

void pr(emp e1)
{
    printf("name is %s \n",e1.name);
    printf("id is %d \n",e1.id);
    printf("score is %f \n",e1.sc);
}