#include <stdio.h>
int main()
{
    int i = 0;
    int a;
    printf("Enter the value \n");
    scanf("%d", &a);
    do
    {
        printf("natural number is %d \n", i+1);

        i++;
    } while (i < a);

    return 0;
}