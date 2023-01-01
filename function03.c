#include <stdio.h>
float avg(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter the value a \n");
    scanf("%d", &a);
    printf("Enter the value b \n");
    scanf("%d", &b);
    printf("Enter the value c \n");
    scanf("%d", &c);
    printf("Average of the three value is %f", avg(a, b, c));
    return 0;
}
float avg(int a, int b, int c)
{
    float d;
    d = (float)(a + b + c ) / 3;
    return d;
}