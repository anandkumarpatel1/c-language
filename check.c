#include <stdio.h>

// int average(int a, int b, float *avg)
// {
//     *avg = (float)(a+b)/2;
//     return 0 ;
// }
int main()
{
int a,b;
float avg = 0;
scanf("%d",&a);
scanf("%d",&b);

avg = (float)(a+b)/2;
printf("%f",avg);
return 0 ;
}