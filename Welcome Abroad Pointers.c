#include<stdio.h>
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{

    int dep[8]= {480,583,679,767,840,945,1140,1305};
    int arr[8]= {616,712,811,900,968,1075,1280,1438};

    int diff=abs(desired_time-dep[0]);
    int min_diff=0;
    for(int i=0; i<8; i++)
    {
        int diff1=abs(desired_time-dep[i]);
        if(diff1<diff)
        {
            min_diff=i;
            diff=diff1;
        }
    }
    *departure_time=dep[min_diff];
    *arrival_time=arr[min_diff];
}
int main()
{
    int h,m,desired_time,departure_time,arrival_time;
    printf("Enter a 24-hour time : ");
    scanf("%d : %d",&h,&m);
    desired_time=(h*60)+m;
    find_closest_flight(desired_time,&departure_time,&arrival_time);
    printf("Closest Departure Time: %d : %.2d\n",departure_time/60,departure_time%60);
    printf("Closest Arrival Time: %d : %.2d",arrival_time/60,arrival_time%60);
    return 0;
}
