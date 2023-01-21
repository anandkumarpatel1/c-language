#include <stdio.h>
int main()
{
    FILE *ptr1, *ptr2;
    ptr1 = fopen("read.txt", "r");
    ptr2 = fopen("write.txt", "w");
    char c = getc(ptr1);
    while (c != EOF)
    {
        putc(c, ptr2);
        c = getc(ptr1);
    }
    while (c != EOF)
    {
        putc(c, ptr2);
        c = getc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}