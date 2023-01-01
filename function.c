#include <stdio.h>
#include <math.h>

int sum(int a);
int main()
{
int a;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("this is the value of area %d",sum(a));
    return 0;
}
int sum(int a)
{
    int c = pow(a, 2);
    return c;
}