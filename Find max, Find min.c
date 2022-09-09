#include<stdio.h>
int
max(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;

}
int
min(int a,int b,int c)
{
    if(a<b && a<c)
        return a;
    else if(b<a && b<c)
        return b;
    else
        return c;

}
void main()
{
    int a,b,c;
    //char c;
    printf("Enter two numbers:");
    scanf("%d %d %d", &a,&b,&c);
    getchar( );
    printf("Max:%d\n", max(a,b,c));
    //scanf("%c", &c);
    printf("Min: %d", min(a,b,c));
    return 0;
}

