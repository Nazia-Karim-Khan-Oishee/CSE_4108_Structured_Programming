#include<stdio.h>
#include<string.h>
int main()
{
    char *month[]= {"January","February","March","April","May",
    "June","July","August","September","October","November","December"};
     int date,m,year;
    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&m,&date,&year);
    printf("You entered the date %s %d, %d",month[m-1],date,year);
    return 0;
}
