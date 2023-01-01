#include <stdio.h>
int main()
{
    int a;
    int i = 0;
    int b = 0;
    printf("Enter the number \n");
    scanf("%d", &a);
    while (i < a)
    {
        i++;
        b += i;
        }
    printf("Sum of %d \n", b);
    return 0;
}