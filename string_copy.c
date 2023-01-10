#include <stdio.h>
#include <string.h>
int main()
{
char *str1 = "anand";
char str2[50];
strcpy(str2 , str1);
printf("string 1st is %s \n",str1);
printf("string 1st is %s",str2);
return 0 ;
}