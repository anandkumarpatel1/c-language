#include <stdio.h>
#include <string.h>

struct emp
{
    char name[30];
    int id;
    float sc;
};

 int pc(struct emp e1);

int main()
{
struct emp e1;
struct emp *ptr;
ptr = &e1;
strcpy(ptr->name,"anand");
ptr->id = 55;
ptr->sc = 23.25;
pc(e1);
return 0 ;
}

int pc(struct emp e1)
{
    printf("name of employe is :%s\n",e1.name);
    printf("id of employe is :%d\n",e1.id);
    printf("score of employee is :%f\n",e1.sc);

    return 0;
}