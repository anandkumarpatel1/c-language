#include <stdio.h>
#include <string.h>
int main()
{
    char str1[34];
    char str2[34];
    char c;
    int i = 0;
    printf("Enter the value of 1st stirng \n");
    scanf("%s", str1);
    printf("Enter the value of %d char of the second stirng \n", i + 1);
    while (c != '\n')
    {

        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i-1] = '\0';
    printf("value of the 1 string is %s \n", str1);
    printf("value of the 2 string is %s \n", str2);
    int val = strcmp(str1, str2);
    printf("%d", val);
    return 0;
}