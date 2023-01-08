#include <stdio.h>
int main()
{
int a;
printf("Enter the value which you want table \n");
scanf("%d", &a);
int table[a];
for (int i = 0; i < 10; i++)
{
    table[i] = (i+1) * a;
}
for (int i = 0; i < 10; i++)
{
    printf("%d x %d = %d \n",a, i+1 ,table[i]);
}

return 0 ;
}