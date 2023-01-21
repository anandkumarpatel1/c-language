#include <stdio.h>
int main()
{
FILE *ptr;
ptr = fopen("generated.txt","w");
int n1 = 23,n2=45,n3=6;
fprintf(ptr,"the value of n1 is: %d\n",n1);
fprintf(ptr,"the value of n2 is: %d\n",n2);
fprintf(ptr,"the value of n3 is: %d\n",n3);
fclose(ptr);
return 0 ;
}