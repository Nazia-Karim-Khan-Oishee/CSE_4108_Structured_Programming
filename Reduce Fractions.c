#include <stdio.h>
int GCD(int n1, int n2)
{
    if (n2 != 0)
        return GCD(n2, n1%n2);
    else
        return n1;
}
int main()
{
    int x,y,max,min;
    printf("Enter the fraction: ");
    scanf("%d/%d",&x,&y);
    if(x>y)
    {
        max=x;
        min=y;
    }
    else
    {
        max=y;
        min=x;
    }
    int temp=GCD(max,min);
    x=x/temp;
    y=y/temp;
    if(x!=y)
    {
        if(y!=1)
        {
            printf("Reduced Fraction is : %d/%d",x,y);
        }
        else
        {
            printf("Reduced Fraction is : %d", x);
        }
    }
    else
    {
        printf("Reduced Fraction is 1");
    }
    return 0;
}
