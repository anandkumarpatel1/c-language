#include <stdio.h>

struct stu
{
    char name[30];
    int roll;
    float percentage;
};

int main()
{
    struct stu arr = {"anand", 45, 97.8};
    printf("name is %s", arr.name);

    return 0;
}