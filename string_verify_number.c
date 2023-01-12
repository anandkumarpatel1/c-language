#include <stdio.h>
int main()
{
char st[100];
scanf("%s",st);
char *a = st;
char c = '7';
int i = 0;
while (*a != '\0')
{
    if (*a == c)
    {
        i++;
    }
    *a++;
}
if (i > 0)
{
    printf("YES");
}
else{
    printf("NO");
}

return 0 ;
}