#include <stdio.h>
int LCM(int min, int max)
{
     int z=max;
        //z=z+max;
    if( max%min==0 && max%z==0 )
    {
        return max;
    }
    else
    {
        return LCM(min,max++);
    }
}
int main()
{
    int x,y,max,min;
    printf("Enter two positive integers : ");
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
    printf("LCM is : %d",LCM(min,max));
    return 0;
}

///                 3,4->z=4
 ///                |
 ///                return(3,4)->z=8
 ///                |
 ///                return(3,4)->z=12
 ///                |
 ///                return 12
