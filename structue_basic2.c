#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
}vec;


int main()
{
vec v1,v2;
v1.x = 34;
v1.y = 88;
v2.x = 54;
v2.y = 234;
printf("the x and y dim of v1 is %d and %d\n",v1.x,v1.y);
printf("the x and y dim of v2 is %d and %d\n",v2.x,v2.y);
return 0 ;
}