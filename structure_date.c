#include <stdio.h>
typedef struct date{
int date;
int month;
int year;
}date;

int com_date(date d1 , date d2);
int main()
{
date d1;
date d2;
printf("Enter the joining date (dd/mm/yyyy)\n");
scanf("%d",&d1.date);
scanf("%d",&d1.month);
scanf("%d",&d1.year);

printf("Enter the leaving date (dd/mm/yyyy)\n");
scanf("%d",&d2.date);
scanf("%d",&d2.month);
scanf("%d",&d2.year);

printf("Your joining date is : %d/%d/%d\n",d1.date,d1.month,d1.year);
printf("Your leaving date is : %d/%d/%d\n",d2.date,d2.month,d2.year);

int k = com_date(d1 , d2);
printf("%d",k);

return 0 ;
}


int com_date(date d1 , date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}