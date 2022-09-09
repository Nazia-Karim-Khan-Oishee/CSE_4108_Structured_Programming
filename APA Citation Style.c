
#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("Enter a first and last name : ");
    while ((c = getchar()) == ' ')
    {
        ;
    }
    char firstname=c;
    while ((c=getchar())!=' ')
    {
        ;
    }
    while ((c=getchar() )!= '\n')
    {
        if(c!=' ')
        {
            putchar(c);
        }

    }

    printf(", %c.", firstname);
   return 0;
}
