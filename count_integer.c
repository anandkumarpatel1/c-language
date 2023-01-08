#include <stdio.h>

void negative(int *arr );
void postive(int *arr );


int main()
{
int arr[] = {3,7,-7,6,-67,87,-65,67,-34};

negative(&arr);
postive(&arr);
return 0 ;
}

void negative(int *arr )
{
    for (int i = 0; i < 9; i++)
    {
        if(arr[i] < 0)
        {
            printf("-ve numbers are %d \n", arr[i]);
        }
        
    }
    
}
void postive(int *arr )
{
    for (int i = 0; i < 9; i++)
    {
        if(arr[i] > 0)
        {
            printf("+ve numbers are %d \n", arr[i]);
        }
        
    }
    
}
