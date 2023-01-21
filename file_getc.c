#include <stdio.h>
int main()
{
FILE *ptr;
ptr = fopen("getsc.txt","r");
// char c = fgetc(ptr);
printf("%c\n",fgetc(ptr));
printf("%c\n",fgetc(ptr));
printf("%c\n",fgetc(ptr));
printf("%c\n",fgetc(ptr));
printf("%c\n",fgetc(ptr));
printf("%c\n",fgetc(ptr));
printf("%c\n",fgetc(ptr));
return 0 ;
}