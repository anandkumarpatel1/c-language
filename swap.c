#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter the value \n");
    scanf("%d %d", &a, &b);
    printf("the value of %d %d \n", a, b);
    int *c, *d;
    c = &a;
    d = &b;
    swap(c, d);
    printf("vlaue after swap %d %d \n ",a , b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
