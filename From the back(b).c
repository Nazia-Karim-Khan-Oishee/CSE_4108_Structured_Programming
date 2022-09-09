#include<stdio.h>
int main()
{
    printf("Enter the message: ");
    char string[100],ch;
    char *p=&string[0];
    while(1)
    {
        scanf("%c", &ch);
        if(ch=='\n')
        {
            break;
        }
        *p=ch;
        p++;
    }
    printf("Reversal is: ");
    for( p=p-1; p>=&string[0]; p--)
    {
        printf("%c",*p);
    }
    return 0;
}


