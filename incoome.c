#include <stdio.h>
int main()
{
    int income;
    float formula;
    float formula2;
    float formula3;
    printf("Enter the your income \n");
    scanf("%d", &income);
    formula = ((income - 250000) * 5 / 100);
    formula2 = ((income - 250000) * 20 / 100);
    formula3 = ((income - 250000) * 30 / 100);
    if (income <= 250000)
    {
        printf("you are not able to pay any tax");
    }
    if (income > 250000 && income <= 500000)
    {
        printf("your payable tax is %f", formula);
    }
    if (income > 500000 && income <= 1000000)
    {
        printf(" your payable tax is %f ", formula2);
    }
    if (income > 1000000)
    {
        printf("your payable tax is %f ", formula3);
    }

    return 0;
}