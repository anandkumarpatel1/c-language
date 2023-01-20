#include <stdio.h>

typedef struct date_time
{
int year;
int month;
int date;
int hour;
int min;
int sec;

} d_t;

int comp_d_t(d_t d1 , d_t d2);

int main()
{
d_t d1 , d2;
printf("Enter the joining date and time (dd/mm/yyyy - hh:mm:ss)\n");
scanf("%d",&d1.date);
scanf("%d",&d1.month);
scanf("%d",&d1.year);
scanf("%d",&d1.hour);
scanf("%d",&d1.min);
scanf("%d",&d1.sec);


printf("Enter the leaving date and time (dd/mm/yyyy - hh:mm:ss)\n");
scanf("%d",&d2.date);
scanf("%d",&d2.month);
scanf("%d",&d2.year);
scanf("%d",&d2.hour);
scanf("%d",&d2.min);
scanf("%d",&d2.sec);

printf("Your joining date time is %d/%d/%d - %d:%d:%d\n",d1.year,d1.month,d1.date,d1.hour,d1.min,d1.sec);
printf("Your leaving date time is %d/%d/%d - %d:%d:%d\n",d2.year,d2.month,d2.date,d2.hour,d2.min,d2.sec);

int k = comp_d_t(d1,d2);
printf("%d",k);
return 0 ;
}


int comp_d_t(d_t d1 , d_t d2)
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
    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return -1;
    }
    if (d1.min > d2.min)
    {
        return 1;
    }
    if (d1.min < d2.min)
    {
        return -1;
    }
    if (d1.sec > d2.sec)
    {
        return 1;
    }
    if (d1.sec < d2.sec)
    {
        return -1;
    }
    return 0;
}