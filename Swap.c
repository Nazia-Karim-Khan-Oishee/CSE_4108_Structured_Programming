#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{
    int x,y;
    printf("Enter two values :");
    scanf("%d%d",&x,&y);
    printf("Values after swaping : ");
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
