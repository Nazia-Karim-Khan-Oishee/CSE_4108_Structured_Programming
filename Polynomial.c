#include<stdio.h>
#include<math.h>
int value(int x)
{
    int s=2*pow(x,6)+4*pow(x,5)-2*pow(x,4)-1*pow(x,3)+3*(x*x)-7*x+10;
    return s;
}
int main()
{
    int a;
    printf("Enter the value of x: ");
    scanf("%d", &a);
    printf("Value of polynomial : ");
    printf("%d", value(a));
    return 0;

}
