#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool is_palindrome(const char *message)
{
    int i=0, j=strlen(message)-1;
    for(int i=0,j=strlen(message)-1; i<=j; j--,i++)
    {
        if(message[j]!=message[i])
        {
            return false;
        }
    }
    return true;
}

int main( )
{
    char message[500];
    printf("Enter a message: ");
    char ch;
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
            message[i]=tolower(ch);
            i++;
        }
    }
    if(is_palindrome(message))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}
