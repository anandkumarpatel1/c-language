#include <stdio.h>
#include <string.h>
struct data
{
    char name[20];
    int roll;
    float percentage;
};

int main()
{
    int t;
    printf("Enter the value of students \n");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        struct data s1;
        
            printf("Enter the name of the students \n");
            scanf("%s",s1.name);
            printf("Enter the Roll no \n");
            scanf("%d",&s1.roll);
            printf("Enter the percentage \n");
            scanf("%f",&s1.percentage);
        

        printf("Name of the students is : %s\nRoll no : %d\nPercentage : %f\n \n", s1.name, s1.roll, s1.percentage);
    }

    return 0;
}