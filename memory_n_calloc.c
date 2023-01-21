#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d is %d \n",i, ptr[i]);
    }
    free(ptr);
    return 0;
}