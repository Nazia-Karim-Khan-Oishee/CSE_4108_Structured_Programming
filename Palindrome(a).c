#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string[500], ch;
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
            string[i]=tolower(ch);
            i++;
        }
    }
    i=i-1;
    //int f=0;
    for(int k=i,j=0; j<k; k--,j++)
    {
        if(string[j]!=string[k])
        {
            printf("Not a palindrome.");
            return 0;
        }
    }

    printf("Palindrome.");

    return 0;
}





