#include <stdio.h>
int main()
{
char str[] = "ANAND";
char *ad;
ad = &str[0];
int i = 1;
while (*ad !='\0')
{
    

    printf("%d char is %c \n",i,*ad);
    printf("%d char add is %u \n",i,ad);

    ad++;
    i++;

}

return 0 ;
}