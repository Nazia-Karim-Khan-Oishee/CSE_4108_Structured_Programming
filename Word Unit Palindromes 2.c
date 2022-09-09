#include<stdio.h>
int main()
{
    char arr[500],ch,sign='.',*p;
    int sum=0;
     printf("Enter a sentence: ");
     //p=&arr[0];
    for(p=&arr[0];(ch=getchar())!='\n';p++)
    {
        if(ch=='.' || ch=='?' || ch=='!')
        {
            sign=ch;
            break;
        }
        *p=ch;
    }
    printf("Reversal is: ");
    for(p=p;; p--)
    {
        if(*(p-1)!=' ' && p!=&arr[0])///hello world
        {
            sum++;
        }
        else
        {
            char *q=p;
            while(sum--)
            {
                printf("%c",*q);
                q++;
            }
            printf(" ");
            sum=0;
        }
        if(p==&arr[0])
        {
            break;
        }
    }
    printf("%c",sign);
    return 0;
}
