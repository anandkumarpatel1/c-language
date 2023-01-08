#include <stdio.h>
int main()
{
    int marks[3];
    for (int i = 0; i < 3 ; i++)
    {
        printf("Enter the %d student marks: \n",i+1);
        scanf("%d",&marks[i]);
    }
    
    for (int i = 0; i < 3 ; i++)
    {
        printf("Marks of the %d student %d: \n",i+1 , marks[i]);
        
    }
    

return 0 ;
}