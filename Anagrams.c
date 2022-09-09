#include <stdio.h>
#include <ctype.h>

int main( )
{
    char in,ch;
    int  alphabet[26] = {0};

    printf("Enter the first word: ");
    for (int i=0; (in=getchar()) != '\n'; i++)
    {
        if (isalpha(in))
        {    in=tolower(in);
            alphabet[in - 'a']++;
        }
    }

    printf("Enter the second word: ");
    for (int j=0; (ch= getchar())!= '\n'; j++)
    {
        if (isalpha(ch))
        {
            alphabet[ch - 'a']--;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i]==0)
        {
            printf("The words are anagrams");
            return 0;
        }
    }
    printf("The words are not anagrams");

    return 0;
}
