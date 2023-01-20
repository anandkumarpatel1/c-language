#include <stdio.h>
typedef struct complex
{
    int real;
    int complex
}comp;

void print(comp c1);

int main()
{
    comp c1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d real no \n", i + 1);
        scanf("%d", &c1[i].real);
        printf("Enter the value of %d complex no \n", i + 1);
        scanf("%d", &c1[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        print(c1[i]);     
    }
    

    return 0;
}

void print(comp c1)
{
    
    printf("the real value is the %d\n",c1.real);
    printf("the complex value is the %d\n",c1.complex);
    
}