#include <stdio.h>
int main()
{
    int a, b, c, avg;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Enter the value of c \n");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    printf("value of avg = %d \n", avg);
    return 0;
}