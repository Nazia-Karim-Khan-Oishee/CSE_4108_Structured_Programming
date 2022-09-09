#include <stdio.h>

int power(int x,int n)///2^3
{
    if (n==0)
    {
        return 1;
    }
    else if (n%2==0)
    {
      return power(x*x,n/2);///(4,1)->4

    }
    else
    {
        return x*power(x, n - 1);///2*(2,2)//->2*4=8  ///4*(4,0)->4*1->4
    }
}

int main( )
{

    int x,n;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&n);
    printf("The result is %d\n",power(x,n));
   return 0;
}
  ///           2^3
  ///           |
  ///           2*(2,2)          ->2*4=8
  ///           |
  ///           (2*2,1)->(4,1)   ->4
  ///           |
  ///           4*(4,0)          ->4*1=4
  ///           |
  ///           1               ->1
