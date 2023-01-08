#include <stdio.h>

void mark(int *marks, int m);

int main()
{
    int marks[] = {34,55,65,64,36,65};
    mark(&marks , 6);
}

void mark(int *marks , int m)
{
for (int i = 0; i < m; i++)
{
    printf("Marks of the %d student is %d \n",i+1, *(marks + i));
}

}