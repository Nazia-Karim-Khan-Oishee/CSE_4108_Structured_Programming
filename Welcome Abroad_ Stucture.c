#include<stdio.h>

struct dept_arrl
{

    int departure;
    int arrival;

}  arr[ ]= { {480,616},{583,712},{679,811},{767,900},
    {840,968},{945,1075},{1140,1280},{1305,1438}
};

void find_closest_flight( int input,int *departure_time,int *arrival_time)
{


    int min=abs(input-arr[0].departure);
    int index=0;
    for(int i=0; i<8; i++)
    {
        int diff=abs(input-arr[i].departure);
        if(min>diff)
        {
            index=i;
            min=diff;
        }
    }

    *departure_time=arr[index].departure;
    *arrival_time=arr[index].arrival;
}
int main()
{
    int h,m,input,departure_time,arrival_time;
    printf("Enter a 24-hour time : ");
    scanf("%d:%d",&h,&m);
    input=(h*60)+m;
    find_closest_flight(input,&departure_time,&arrival_time);
    printf("Closest Departure Time: %.2d : %.2d\n",departure_time/60,departure_time%60);
    printf("Closest Arrival Time: %.2d : %.2d\n",arrival_time/60,arrival_time%60);
    return 0;
}


