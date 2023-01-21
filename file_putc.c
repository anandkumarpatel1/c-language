#include <stdio.h>
int main()
{
FILE *ptr;
ptr = fopen("putc.txt","w");
putc('v',ptr);
return 0 ;
}