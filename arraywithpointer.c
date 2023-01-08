#include <stdio.h>
int main()
{
    int b;
    printf("Enter the number of the student \n");
    scanf("%d", &b);
    int marks[b];
    int *a = &marks[0];
    for (int i = 0; i < b; i++)
    {
        printf("Enter the marks of %d student \n", i + 1);
        scanf("%d", a);
        a++;
    }
    for (int i = 0; i < b; i++)
    {
        printf("Marks of the %d student is %d \n", i + 1, marks[i]);
    }

    return 0;
}