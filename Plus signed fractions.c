
#include <stdio.h>

int main()
{
    int num1, denom1, num2, denom2, x, y;
    char sign;
    printf("Enter fractions: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1,&sign,&num2, &denom2);
    if(sign=='+')
    {
        x= num1 * denom2 + num2 *denom1;
        y= denom1 * denom2;
    }



    else if(sign=='-')
    {
        x= num1 * denom2 - num2 *denom1;
        y= denom1 * denom2;
    }


    else if(sign=='*')
    {
        x = num1 *  num2 ;
        y= denom1 * denom2;
    }


    else if(sign=='/')
    {
        x= num1 *  denom2 ;
        y= denom1 * num2;
    }
    if(x==y)
    {
        printf("The result is 1");
    }
    else if(x==0)
    {
        printf("The result is 0");
    }
    else
    {
        printf("The result is %d/%d",x,y);}
        return 0;
}
