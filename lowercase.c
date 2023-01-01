#include <stdio.h>
int main()
{
    char a ;
    printf("Enter the character \n");
    scanf("%c",&a);
    if ((a >= 97) && (a <= 122))
    {
        printf("your character is lower case");
    }
    else {
        printf("your character is not lower case");
    }
    return 0;
}