#include<stdio.h>

struct time
{
    int hour,minute,second;
} t;

void conversion(struct time *t)
{

    int total_sec=(t->hour*3600)+(t->minute*60)+(t->second);
    total_sec++;
    t->hour=total_sec/3600;
    total_sec=total_sec-(t->hour*3600);
    t->minute=total_sec/60;
    total_sec=total_sec-(t->minute*60);
    t->second=total_sec;
    printf("Updated time is : %.2d:%.2d:%.2d",t->hour,t->minute,t->second);

}

int main()
{
    printf("Enter the time (hh:mm:ss) : ");
    scanf("%d:%d:%d",&t.hour,&t.minute,&t.second);
    conversion(&t);
    return 0;
}
