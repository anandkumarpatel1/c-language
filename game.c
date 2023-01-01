#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int gen;
    int num;
    srand(time(0));
    gen = rand() % 100;
    // printf("this is the value of genrated number %d \n", gen);

    do
    {
        printf("Choose the number \n");
        scanf("%d", &num);
        if (num < gen)
        {
            printf("Choose greater number \n");
        }
        else if (num > gen)
        {
            printf("Choose lower number \n");
        }
        else
        {
            printf("sucessful your number is %d \n", gen);
        }
    } while (num != gen);

    return 0;
}