#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

bool are_anagrams(const char *word1, const char *word2){

    char alphabets[26]= {0},ch;
    int i=0;
    while(word1[i]!='\0')
    {
        if(isalpha(word1[i]))
        {
            ch=tolower(word1[i]);
            alphabets[ch-'a']++;
        }
        i++;
    }
    i=0;
    while(word2[i]!='\0')
    {
        if(isalpha(word2[i]))
        {
           ch=tolower(word2[i]);
            alphabets[ch-'a']--;
        }
        i++;
    }

    for(i=0; i<26; i++)
    {
        if(alphabets[i]!=0)
        {
            return false;
        }
    }
    return true;
    }
int main()
{

    char word1[100], word2[100];
    printf("Enter first word: ");
    scanf("%s",word1);
     printf("Enter second word: ");
    scanf("%s",word2);
    if(are_anagrams(word1,word2)){
        printf("This is an anagram.");
    }
    else
        {
        printf("This is not an anagram.");
    }
    return 0;
    }

