#include <stdio.h>
#include <string.h>
int main()
{
char st[100];
printf("Enter the sentence (max 100 letters) :\n");
gets(st);
char *a = st;
char c;
printf("Enter the letter which you find  : \n");
scanf("%c",&c);
int i = 0;
while (*a != '\0')
{
    if (*a == c)
    {
        i++;
    }
    *a++;
    
}
printf("%d",i);

return 0 ;
}