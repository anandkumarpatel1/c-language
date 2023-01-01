#include <stdio.h>

void swap(int *a , int *b);


int main()
{

    int x , y;
    scanf(" %d  %d", &x , &y);
    printf(" %d %d \n",x , y);
    swap(&x , &y);
    printf("%d %d \n" , x , y);


return 0 ;
}

void swap(int *a , int *b)
{
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}