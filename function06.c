#include <stdio.h>
float force(float a);
int main()
{
    float a;
    printf("Enter the value of mass in kgs \n");
    scanf("%f", &a);
    printf("Force = %.2f", force(a));

    return 0;
}
float force(float a)
{
    float f;
    f = a * 9.8;
    return f;
}