#include <stdio.h>
float temp(float a);
int main()
{
    float a;
    printf("Enter the value \n");
    scanf("%f", &a);
    printf("Temp in farenheit %.2f \n", temp(a));

    return 0;
}
float temp(float a)
{
    float far;
    far = (float)(a * 9 / 5) + 32;
    return far;
}