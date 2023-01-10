#include <stdio.h>
#include <string.h>
int main()
{
char *str1 = "anand";
char *str2 = "anand";
int val = strcmp(str1,str2);
printf("%d \n",val);
if (strcmp(str1,str2) == 0)
{
    printf("string 1 and 2 is same ");
}
else
{
    printf("strings is not same");
}

return 0 ;
}