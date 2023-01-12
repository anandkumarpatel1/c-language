#include <stdio.h>
int main()
{
char st[] = "hello";
char *ad = st;
while(*ad !='\0')
{
    *ad = *ad +1;
    *ad++;
}
printf("Encrpyted stirng is %s",st);
return 0 ;
}