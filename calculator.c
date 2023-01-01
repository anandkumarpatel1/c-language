#include <stdio.h>
int main()
{
    int a ,b ;
    char c;
    printf("choose the opretaor '+', '-', '*', '/', 'moduls(use moduls sign)' \n ");
    scanf("%c",&c);
    printf("enter the value of a \n ");
    scanf("%d",&a);
    printf("enter the value of b \n ");
    scanf("%d",&b);
    switch (c)
    {
    case '+':
        printf("sum of the a and b is %d",a+b);
        break;
    case '-':
        printf("subtract of the a and b is %d",a-b);
        break;
    case '*':
        printf("multiply of the a and b is %d",a*b);
        break;
    case '/':
        printf("divide of the a and b is %d",a/b);
        break;
    case '%':
        printf("reminder or moduls of the a and b is %d",a%b);
        break;
    
    default:
    printf("please enter a valid opreator");
        break;
    }
   
return 0 ;
}