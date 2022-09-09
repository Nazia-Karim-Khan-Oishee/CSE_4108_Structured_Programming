#include<stdio.h>
#include<string.h>

int vowel_count(const char* sentence)
{
    char ch;
    int count=0;
    for(int i=0;i<strlen(sentence);i++)
        {
         ch=sentence[i];
        ch=tolower(ch);
        if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
        {
            count++;
        }
        }
    return count;
}
 int main()
 {
    char sentence[100];
    gets(sentence);
    int vowels=vowel_count(sentence);
    printf("%d\n", vowels);
    return 0;
}
