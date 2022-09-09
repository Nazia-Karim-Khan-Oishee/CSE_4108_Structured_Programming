#include<stdio.h>
#include<math.h>
int main()
{

    double a,x,c;
    scanf("%lf",&x);
    double y=1;
    while(1)
    {
        a=x/y;
        y=((a)+y)/2;
        c=fabs((x/y)-y);
        if(c<.00001*y)
        {
            break;
        }
    }
    printf("%lf",y);
    return 0;
}
