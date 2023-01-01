#include <stdio.h>
int main()
{
    int i = 0;
    int a;
    printf("Enter the value \n");
    scanf("%d", &a);
    for (i; i < a; i++)
    {
        printf("the number is %d \n", i + 1);
    }
    return 0;
}