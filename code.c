#include<stdio.h>
int main()
{
    char a=1;
    while(a!='\n')
    {
        scanf("%c",&a);
        printf("%c", a);
    }
    return 0;
}
