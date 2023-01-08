#include <stdio.h>
int main()
{
    int arr[3][10];
    int a, b ,c;
    printf("Enter the table which you want \n");
    scanf("%d %d %d",&a , &b , &c);
    for (int i = 0; i < 1;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = a*(j+1);
        } 
    }
    for (int i = 1; i < 2;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = b*(j+1);
        } 
    }
    for (int i = 2; i < 3;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = c*(j+1);
        } 
    }

/* -------******* output hai yaha se *******------- */

    for (int i = 0; i < 1;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n",a,j+1,arr[i][j]);
        }
        
    }
    for (int i = 1; i < 2;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n",b,j+1,arr[i][j]);
        }
        
    }
    for (int i = 2; i < 3;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n",c,j+1,arr[i][j]);
        }
        
    }


return 0;
}