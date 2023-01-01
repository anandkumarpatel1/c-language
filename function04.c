#include <stdio.h>
int sum (int a);
int main()
{
int a;
printf("Enter the value \n");
scanf("%d",&a);
printf("Sum of %d natural number is %d",a , sum(a)); // pura nahi hai
return 0 ;
}
int sum (int a){
    int b = 1;
    for( a; a >= b ; b++ ){
        return b;
    }
}
