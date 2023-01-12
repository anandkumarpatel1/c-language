#include <stdio.h>
int main()
{
char *str1 = "anandk";
char *str2;
int i = 0;
while (str1[i] != '\0')
{
    str2[i] = str1[i];
   i++;
}
printf("%s",str2);

return 0 ;
}