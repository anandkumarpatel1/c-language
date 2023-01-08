#include <stdio.h>
void add(int *a);
int main()
{
int a = 5;
printf("%d \n", a);
add(a);
printf("%u \n", &a);


return 0 ;
}
void add(int *a){
    printf("%u \n",&a);
}