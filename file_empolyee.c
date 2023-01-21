#include <stdio.h>
int main()
{
    char name1[20], name2[20];
    int salary1, salary2, n;
    FILE *ptr;
    ptr = fopen("empolye.txt", "w");

    printf("Enter the name of 1st empolye\n");
    scanf("%s", name1);
    printf("Enter the salary 1st of empolye\n");
    scanf("%d", &salary1);
    printf("Enter the name of 2nd empolye\n");
    scanf("%s", name2);
    printf("Enter the salary 2nd of empolye\n");
    scanf("%d", &salary2);
    fprintf(ptr, "%s: ", name1);
    fprintf(ptr, "%d \n", salary1);
    fprintf(ptr, "%s:  ", name2);
    fprintf(ptr, "%d \n", salary2);
    return 0;
}