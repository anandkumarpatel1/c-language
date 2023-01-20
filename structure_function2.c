#include <stdio.h>

typedef struct vector
{
    int a;
    int b;
} vec;

int sum(vec v1, int *c);
int main()
{
    vec v1;
    vec *ptr;
    int c = 0;
    ptr = &v1;
    ptr->a = 78;
    ptr->b = 90;
    sum(v1, &c);
    printf("%d",c);
    return 0;
}

int sum(vec v1, int *c)
{
    *c = v1.a + v1.b;

    return *c;
}