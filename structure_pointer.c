#include <stdio.h>

struct emp
{
    char name;
    int id;
    float sc;
};

int main()
{
    struct emp e1;
    struct emp *ptr;

    ptr = &e1;
    // (*ptr).id = 100;  ----> this is also used
    ptr->id = 100;
    printf("%d", e1.id);
    return 0;
}