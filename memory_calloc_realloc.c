#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr;
int n,m;
printf("Enter the size of array\n");
scanf("%d",&n);
ptr = (int *) calloc(n,sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("Enter the %d value \n",i);
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < n; i++)
{
    printf("the %d value is: %d\n",i,ptr[i]);
}
printf("Enter the new size of array\n");
scanf("%d",&m);
ptr = (int *) realloc(ptr, m * sizeof(int));
for (int i = 0; i < m; i++)
{
    printf("Enter the %d value \n",i);
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < m; i++)
{
    printf("the %d value is: %d\n",i,ptr[i]);
}

return 0 ;
}