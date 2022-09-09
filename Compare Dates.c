
#include <stdio.h>

int main()
{
    int y, m, d;
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m,&d,&y);
    int x=m, z=d, k=y;
    while(y!= 0 && m!=0 && d!=0)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m,&d,&y);
        //if(y!=0)
        //{
        if(k>y)
        {
            x = m;
            z = d;
            k = y;
        }
        else if(k==y)
        {
            if(x>m)
            {
                x= m;
                z = d;
            }
            else if(x==m)
            {
                if(z>d)
                {
                    z= d;
                }
            }
        }
    }
}
 printf("%d/%d/%d is the earliest date\n", x, z,k);
//printf("%d/%d/%d is the earliest date", x,z,k);
return 0;
}

