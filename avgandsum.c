#include <stdio.h>

int sum_avg(int a , int b , int *sum , float *avg);

int main()
{
int a , b , sum ;
float avg;
a = 5 ;
b = 8;
sum_avg(a , b , &sum , &avg); 
printf("sum of a and b %d \n",sum);
printf("avg of a and b %f \n",avg);

return 0 ;
}

int sum_avg(int a , int b , int *sum , float *avg)
{   
    *sum = a + b;
    *avg = (float)(a+b)/2;

    return 0;
}