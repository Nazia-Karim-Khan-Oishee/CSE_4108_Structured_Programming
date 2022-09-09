#include <stdio.h>

int main()
{
    while(1)
    {
    int digit[10]= {0},n,temp,x;
        printf("Enter  a positive number:");
        scanf("%d",&n);
        if(n<=0)
        {
            break;
        }
        while(n>0)
        {
            x=n%10;
            temp=x;
            digit[temp]++;
            n=n/10;
        }
        printf("Repeated digits : ");
        for(int i=0; i<10; i++)
        {
            if(digit[i]>1)
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}

