#include <stdio.h>
int main()
{
    int a = 10;
    do
    {
        printf("the value of number %d\n", a);
        a++;
        if(a == 19){
            break;
        }
    } while (a < 50);

    return 0;
}