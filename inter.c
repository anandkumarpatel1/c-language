#include <stdio.h>
int main()
{
    int p,r,t,si;
    printf("Enter the amount \n");
    scanf("%d",&p);
    printf("Enter the rate \n");
    scanf("%d",&r);
    printf("Enter the time \n");
    scanf("%d",&t);
    si = (p+(p*r*t)/100);
    printf("value of  Total Amount %d",si);


}