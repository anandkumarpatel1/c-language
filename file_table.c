#include <stdio.h>
int main()
{
int n;
printf("Enter the no which you need table\n");
scanf("%d",&n);
FILE *ptr;
ptr = fopen("table.txt","w");
for (int i = 0; i < 10; i++)
{
    fprintf(ptr ,"%d X %d = %d\n",n,i+1,n*(i+1));
}
printf("Table of %d is successfully generated in table.txt\n",n);

return 0 ;
}