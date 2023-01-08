#include <stdio.h>
void pointtopoint(int *i, int *point, int **topoint);
int main()
{
    int i = 94;
    int *point;
    int **topoint;
    point = &i;
    topoint = &point;
    pointtopoint(&i , &point , &topoint);
    printf("%d",i);
}
void pointtopoint(int *i, int *point, int **topoint)
{
    printf("%d",**topoint);
}