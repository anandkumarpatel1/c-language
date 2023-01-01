// #include <stdio.h>
// int main()
// {
// int a ;
// scanf("%d",&a);
// printf("%u", &a);
// return 0 ;
// }

#include <stdio.h>
int main()
{
int a = 7;
int *j;
j = &a;
printf("%d",*j);
return 0 ;
}