#include<stdio.h>
#include<ctype.h>
int main()
{
   int sum=0,alphabet[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char in[100];
    printf("Enter a word: ");
    scanf("%s",in);
    for(int i=0; i<strlen(in); i++)
    {    in[i]=tolower(in[i]);
        sum=sum+alphabet[(int)in[i]-97];///pitfall  in[0]=p
    }
    printf("Scrabble value: %d",sum);
    return 0;
}
