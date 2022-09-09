#include<stdio.h>
#include<stdlib.h>
int main()
{

    int h,m,min,dept[8]= {480,583,679,767,840,945,1140,1305};
    int arrl[8]= {616,712,811,900,968,1075,1280,1438};

    printf("Enter a 24-hour time : ");
    scanf("%d : %d",&h,&m);
    min=(h*60)+m;
    int diff=abs(min-dept[0]);
    int min_diff=0;
    for(int i=0; i<8; i++)
    {
        int diff1=abs(min-dept[i]);
        if(diff1<diff)
        {
            min_diff=i;///3
            diff=diff1;///
        }
    }
    int dept_hour=(dept[min_diff]/60);
    int dept_min=dept[min_diff]%60;
    int arrl_hour=(arrl[min_diff]/60);
    int arrl_min=arrl[min_diff]%60;
    printf("Closest Departure Time: %.2d : %.2d\n",dept_hour,dept_min);
    printf("Closest Arrival Time: %.2d : %.2d\n",arrl_hour,arrl_min);

    return 0;
}
