#include <stdio.h>
#include <string.h>

typedef struct accounts
{
    int acc_no;
    char name[20];
    float balance;

} user;

int main()
{
    int n;
    printf("Enter the users number \n");
    scanf("%d", &n);

    user u1[n];
for (int i = 0; i < n; i++)
{
    printf("Enter the account number\n");
    scanf("%d",&u1[i].acc_no);
    printf("Enter the account holders name \n");
    scanf("%s",&u1[i].name);
    printf("Enter the accoutn balance\n");
    scanf("%f",&u1[i].balance);
}
for (int i = 0; i < n; i++)
{

    printf("Account number is %d\n",u1[i].acc_no);
    printf("Account holder name is %s\n",u1[i].name);
    printf("Account balance is %f\n",u1[i].balance);
}


        return 0;
}