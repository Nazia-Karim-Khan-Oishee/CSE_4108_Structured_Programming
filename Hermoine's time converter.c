#include<stdio.h>
#include<ctype.h>
int main()
{

    int h,m;
    char a[3];

    printf("Enter a 12-hour time : ");
    scanf("%d:%d %s",&h,&m, a);
    if(strcmp(a,"AM")==0 || strcmp(a,"am")==0)
    {
        if(h==12)
        {
            printf("Equivalent 24 hour time: 0:%d", m);
        }
        else
        {
            printf("Equivalent 24-hour time: %d:%d", h,m);
        }
    }
    else if(strcmp(a,"PM")==0 || strcmp(a,"pm")==0)
    {
        if(h==12)
        {
            printf("Equivalent 24-hour time: %d:%d", h,m);
        }
        else
        {
             printf("Equivalent 24-hour time: %d:%d", h+12,m);
        }
    }
    return 0;
}

