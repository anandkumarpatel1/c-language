#include <stdio.h>
int main()
{
FILE *ptr;
ptr = fopen("getsc.txt","r");
printf("%c",getc(ptr));
printf("%c",getc(ptr));
printf("%c",getc(ptr));
fclose(ptr);
return 0 ;
}