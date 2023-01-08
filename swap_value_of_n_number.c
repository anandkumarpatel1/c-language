#include <stdio.h>

void swap(int *arr , int a);

int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9};
int a = 9/2;
int b = 9;
swap(&arr , a);
for (int i = 0; i < b; i++)
{
    printf("swap %d no to %d no \n ", i+1 , arr[i]);
}

return 0 ;
}

void swap(int *arr , int a)
{
    for (int i = 0; i < a; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[9-i-1];
        arr[9-i-1] = temp;

    }
    
}
