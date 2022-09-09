#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[500],ch;
    printf("Enter a message: ");
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
            *(string+i)=tolower(ch);
            i++;
        }
    }
    int k=0;
    for(k=k,i=i-1; k<i; k++,i--)
    {
        if(*(string+k)!=*(string+i))
        {
            printf("Not a palindrome!");
            return 0;
        }
    }
    printf("Palindrome.");
    return 0;
}
