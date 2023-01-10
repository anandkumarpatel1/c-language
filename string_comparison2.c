#include <stdio.h>
#include <string.h>
int main()
{
char *str1 = "hallo";
char *str2 = "hfllo";
int val = strcmp(str1,str2);
printf("%d",val);
return 0 ;
}