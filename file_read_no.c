#include <stdio.h>
int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("anand.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("%d %d %d",a , b ,c);
    return 0;
}