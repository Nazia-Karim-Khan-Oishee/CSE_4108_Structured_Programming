#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[500];
    printf("Enter a message: ");
    char ch, *p=&string[0];
    int i=0;
    while(1)
    {
        scanf("%c", &ch);
        if(ch=='\n')
        {
            break;
        }
        if(isalpha(ch))
        {
            *p=tolower(ch);
            p++;
        }
    }
    char *k=&string[0];
    for(k=&string[0],p=p-1; k<p; k++,p--)
    {
        if(*k!=*p)
        {
            printf("Not a palindrome!");
            return 0;
        }
    }
    printf("Palindrome.");
    return 0;
}


