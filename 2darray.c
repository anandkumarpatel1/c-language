#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the students number \n");
    scanf("%d", &a);
    printf("Enter the subjects number \n");
    scanf("%d", &b);
    int studentmarks[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the value of  %d student in %d subject  \n",i+1,j+1);
            scanf("%d", &studentmarks[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("marks of the %d student in %d subject is %d  \n" , i+1, j+1 , studentmarks[i][j]);
        }
    }

    return 0;
}