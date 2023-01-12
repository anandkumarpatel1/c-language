#include <stdio.h>
int main()
{
    int a;
    int y;
    int coun = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        y = a % 10;
        if (y == 7)
        {
            coun++;
        }
        a = a/10;
    }
if (coun > 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

    return 0;
}