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
    printf("Enter two positive integers: ");
    scanf("%d%d",&x,&y);
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
    printf("GCD is %d",GCD(max,min));
    return 0;
}
///                 6,15
 ///                 |
 ///             return(15,3)
 ///             |
 ///             return (3,0)
 ///             |
 ///             return  3
