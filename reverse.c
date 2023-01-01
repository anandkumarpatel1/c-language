#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value \n");
    scanf("%d", &a);
    for (a; a > 0; a--)
    {
        printf("natural number is %d \n", a);
    }
    return 0;
}