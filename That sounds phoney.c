#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter a phone number: ");
    while((a = getchar()) != '\n')
    {a=toupper(a);
        if(a>='A' && a<='C')
    {
        printf("2");
    }
    else if(a>='D' && a<='F')
    {
        printf("3");
    }
    else if(a>='G' && a<='I')
    {
        printf("4");
    }
    else if(a>='J' && a<='L')
    {
        printf("5");
    }
    else if(a>='M' && a<='O')
    {
        printf("6", 6);
    }
    else if(a>='P' && a<='S')
    {
        printf("%d", 7);
    }
    else if(a>='T' && a<='U')
    {
        printf("%d", 8);
    }
    else if(a>='W' && a<='Z')
    {
        printf("%d", 9);
    }
    else
    {
        printf("%c", a);
    }}
    return 0;
}
