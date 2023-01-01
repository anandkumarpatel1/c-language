#include <stdio.h>
int main()
{
    int a;
    int i = 0;
    printf("Enter the value \n");
    scanf("%d", &a);
    do
    {
        i++;
        if (i == 8)
        {
            continue;
        }
        printf("value %d \n", i);

    } while (i < a);

    return 0;
}