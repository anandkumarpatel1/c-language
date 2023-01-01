#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter your number \n");
    scanf("%d", &a);
    printf("enter your number \n");
    scanf("%d", &b);
    printf("enter your number \n");
    scanf("%d", &c);
    printf("enter your number \n");
    scanf("%d", &d);
    if ((a > b) && (a > c) && (a > d)){
        printf("1st number is greater than ohter numbers");
    }
    if ((b > a) && (b > c) && (b > d)){
        printf("2nd number is greater than ohter numbers");
    }
    if ((c > b) && (c > a) && (c > d)){
        printf("3rd number is greater than ohter numbers");
    }
    if ((d > b) && (d > c) && (d > a)){
        printf("4th number is greater than ohter numbers");
    }
}