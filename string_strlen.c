#include <stdio.h>


int main()
{
char str[] ="anand";
char *cpt;
cpt = str;
int i = 0;
while (*cpt != '\0')
{
    cpt++;
    i++;
}
printf("%d",i);

return 0 ;
}
