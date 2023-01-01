#include <stdio.h>
int main ()
{
    int a; 
    int b = 1;
    int factorial = 1;
    printf("Enter the value \n");
    scanf("%d",&a);
    for(b ; b <= a ; b++)
    {
        factorial *= b;
    }
    printf("factorial of %d is %d ", a , factorial);
    return 0 ;
}