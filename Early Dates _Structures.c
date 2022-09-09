#include<stdio.h>
struct date
{

    int day,month,year;

} date1,date2;

int compare_dates(struct date d1,struct date d2)
{
    int time1=(date1.year*365)+(date1.month*30)+(date1.day);
    int time2=(date2.year*365)+(date2.month*30)+(date2.day);
    if(time1<time2)
    {
        return -1;
    }
    else if(time1>time2)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}
int main()
{

    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d",&date1.month,&date1.day,&date1.year);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d",&date2.month,&date2.day,&date2.year);
    int result=compare_dates(date1,date2);
    if(result==1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d",date2.month,date2.day,date2.year,date1.month,date1.day,date1.year);
    }
    else if(result==-1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d",date1.month,date1.day,date1.year,date2.month,date2.day,date2.year);
    }
    else
    {
        printf("%d/%d/%d and %d/%d/%d are the same date.",date1.month,date1.day,date1.year,date2.month,date2.day,date2.year);
    }
    return 0;

}

