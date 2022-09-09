#include<stdio.h>
int main()
{
    int i, j, s, days;
    printf("Enter a number of days in month : ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Mon, 7=Sun) : ");
    scanf("%d", &s);

    /*if(days>31 || days<28 || s>7)
    {
        printf("Please enter valid number.");
        return 0;
    }*/
    printf("Mo Tu We Th Fr Sa Su\n");

    for(j=0; j<s; j++)
    {
        printf(" ");
        if(j==s){break;}
    }
   // s--;
    for(i=1; i<=days; i++)
    {

        printf("%2d ",i);

        if((i+s)%7==0 )
        {
            printf("\n");
        }

    }
    return 0;
}
