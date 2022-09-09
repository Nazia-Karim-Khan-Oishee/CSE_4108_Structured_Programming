#include<stdio.h>
int main()
{
    int count=0,n;
    scanf("%d",&n);
    for(int i=2; i<=n; i=i+2)
    {
        printf("%d\n",i*i);
        count++;
        if(count%24 == 0)
        {
            printf("Press enter to continue... ");
            getchar();
            while(getchar()!='\n');

        }

    }
    return 0;
}
