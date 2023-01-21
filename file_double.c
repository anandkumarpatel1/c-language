#include <stdio.h>
int main()
{
FILE *ptr1,*ptr2;
int n;
ptr1 = fopen("double.txt","r");
fscanf(ptr1,"%d",&n);
ptr2 = fopen("double.txt","w");
fprintf(ptr2,"%d",n*2);
return 0 ;
}