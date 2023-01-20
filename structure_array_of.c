#include <stdio.h>
#include <string.h>

struct stu
{
    char name[20];
    int roll;
    float percentage;
};

int main()
{
    int n;
    printf("Enter the number of students \n");
    scanf("%d", &n);
    struct stu arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the students \n");
        scanf("%s", arr[i].name);
        printf("Enter the Roll no \n");
        scanf("%d", &arr[i].roll);
        printf("Enter the percentage \n");
        scanf("%f", &arr[i].percentage);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d students data is: \n",i+1);
        printf("Name of student is: %s\n",arr[i].name);
        printf("Roll no is: %d\n",arr[i].roll);
        printf("Percentage is: %.2f\n\n",arr[i].percentage);
    }
    return 0;
}