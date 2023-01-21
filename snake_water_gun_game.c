#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int your_turn(char you, char comp);

int main()
{
    char you, comp;

    srand(time(0));
    int n = rand() % 100 + 1;

    if (n < 33)
    {
        comp = 's';
    }
    else if (n > 33 && n < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("NOW, Your turn!");
    printf("s for snake, w for water and g for gun\n");
    scanf("%c", &you);

    int r = your_turn(you, comp);
    printf("Your choose is %c and comp choose is %c\n\n", you, comp);
    if (r == 0)
    {
        printf("Match was draw\n");
    }
    else if (r == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose\n");
    }
    return 0;
}

int your_turn(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}