#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr;
int n;
printf("Enter the value of integers\n");
scanf("%d",&n);
ptr = (int *) malloc(n * sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("Enter the %d value\n",i);
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < n; i++)
{
    printf("The %d value is %d\n",i,ptr[i]);
}
free(ptr);

return 0 ;
}