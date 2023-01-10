#include <stdio.h>
int strlength(char *a);

int main()
{
char str[] = "anand";
int leng = strlength(str);
printf("%d",leng);
return 0 ;
}

int strlength(char *a)
{
    char *str = a;
    int l = 0;
    while (*str != '\0')
    {
        str++;
        l++;
    }

    return l;
    
}