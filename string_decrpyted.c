#include <stdio.h>
int main()
{
char st[] = "ifmmp";
char *a = st;
while (*a != '\0')
{
    *a = *a-1;
    *a++;
}
printf("Decrpyted string is :%s",st);
return 0 ;
}