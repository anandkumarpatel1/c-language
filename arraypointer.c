#include <stdio.h>
int main()
{

int a[] = {1, 4,5,6,7};
int *d = &a[0];
printf("add of a[0] is %u \n",d);
printf("value of the a[0] is %d \n", a[0]);
d++;
printf("the add of the a[1] is %u \n", d );
printf("value of the a[1] is %d \n", *d);

return 0 ;
}