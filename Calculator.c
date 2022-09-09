#include<stdio.h>
int calculate(int a,int b, char c)
{
    if(c=='+')
        return a=a+b;
    else if(c=='-')
        return a=abs(a-b);
    else if(c=='*')
        return a=a*b;
    else
        return a=a/b;
}
int main()
{
    int a,b;
    char c;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    getchar( );
    printf("Enter a choice:");
    scanf("%c", &c);
    printf("Result of the operation: %d", a=calculate(a,b,c));
    return 0;
}
