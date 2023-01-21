#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr;
int t,n,m;
printf("Enter the number of table\n");
scanf("%d",&t);
printf("Enter the size of the table\n");
scanf("%d",&n);
ptr = (int *) malloc(n * sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("%d X %d = %d\n",t,i+1,t*(i+1));
}
printf("Enter the number of table\n");
scanf("%d",&m);
ptr = (int *) realloc(ptr,m * sizeof(int));
for (int i = 0; i < m; i++)
{
    printf("%d X %d = %d\n",t,i+1,t*(i+1));
}

return 0 ;
}