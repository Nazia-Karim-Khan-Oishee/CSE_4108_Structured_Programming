
#include<stdio.h>
#include<ctype.h>
int main()
{
    int h,m,min;
    char a;
    printf("Enter a 12 hour time: ");
    scanf("%d:%d %c", &h,&m,&a);

    a=toupper(a);
    if(a=='A')
    {
        if(h==12)
        {
            h=0;
        }}
        else if(a== 'P')
        {
            if(h!=12)
            {
                h=h+12;
            }
        }


        min=(h*60)+m;

        if(min>172 && min<=532)
        {
            printf("Closest departure time is 8:00 a.m. , arriving at 10:16 a.m.");
        }
        else if(min>532 && min<=631)
        {
            printf("Closest departure time is 9:43 a.m. , arriving at 11:52 a.m.");
        }
        else if(min>631 && min<=723)
        {
            printf("Closest departure time is 11:19 a.m. , arriving at 1:31 p.m.");
        }
        else if(min>723 && min<804)
        {
            printf("Closest departure time is 12:47 p.m. , arriving at 3:00 p.m.");
        }
        else if(min>803 && min<893)
        {
            printf("Closest departure time is 2:00 p.m. , arriving at 4:08 p.m.");
        }
        else if(min>=893 && min<1043)
        {
            printf("Closest departure time is 3:45 p.m. , arriving at 5:55 p.m.");
        }
        else if(min>1043 && min<=1223)
        {
            printf("Closest departure time is 7:00 p.m. , arriving at 9:20 p.m.");
        }
        else
        {
            printf("Closest departure time is 9:45 p.m. , arriving at 11:58 p.m.");
        }


        return 0;




    }
