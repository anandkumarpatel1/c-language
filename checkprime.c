#include <stdio.h>
int main()
{
    int a = 1;
    int b;
    int c = 0;
    printf("Enter the value \n");
    scanf("%d", &b);
    while (a < b)
    {
        a++;
        if (b % a == 0)
        {
            c = 1; 
            break;
        }
    }
    if (c = 1)
    {
        printf("this a not prime number");
    }
    else
    {
        printf("this is a prime number");
    }
    return 0;
}