#include <stdio.h>
int main()
{
    int a ;
    int b = 1;
    int sum = 0;
    printf("Enter the value of which you to want to sum \n");
    scanf("%d",&a);
    while (b <= 10)
    {
        
        printf("%d x %d = %d \n",a , b ,a*b);
        sum += (a*b);
        b++;
    }
    printf("sum of 8 table %d", sum);
    

    return 0;
}