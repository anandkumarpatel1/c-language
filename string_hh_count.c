#include <stdio.h>
int main()
{
    char str[] = "anand";
    char *a ;
    a= &str[0];
    int b;
    b = 0;
    while (*a != '\0')
    {

        
        b++;
        a++;
    }
    printf("%d", b);

    return 0;
}