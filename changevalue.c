#include <stdio.h>

void chng(int *a);

int main()
{

int a = 14;
int *b = &a;
printf("value of a %d \n", a);
printf("address of a or value of %u \n", b);
chng(b);
printf("%d",a);

return 0 ;
}

void chng(int *a)
{
    printf("value of function %u \n",*a);
    while (--*a)
    {
        printf("%d \n", *a);
    }
    

}