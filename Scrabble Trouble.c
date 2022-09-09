#include<stdio.h>
#include<ctype.h>
int compute_scrabble_value(const char *word)
{
    int i=0,sum=0;
    char ch;
    while(i<strlen(word))
    {
        ch=word[i];
        ch=toupper(ch);
        switch (ch)
        {
        case 'A': case 'E': case 'I': case 'L':
        case 'N': case 'O': case 'R': case 'S':
        case 'T': case 'U':
        {
            sum++;
            break;
        }
        case 'D': case 'G':
        {
            sum=sum+2;
            break;
        }
        case 'B': case 'C': case 'M': case 'P':
        {
            sum+=3;
            break;
        }
        case 'F': case 'H': case 'V':
        case 'W': case 'Y':
        {
            sum=sum+4;
            break;
        }
        case 'K':
        {
            sum=sum+5;
            break;
        }
        case 'J':
        case 'X':
        {
            sum+=8;
            break;
        }
        case 'Q': case 'Z':
        {
            sum=sum+10;
            break;
        }
        default:
        {
            break;
        }
        }
        i++;
    }
    return sum;

}
int main()
{
    int sum=0;
    char word[500];
    printf("Enter a word: ");
    scanf("%s",word);
    printf("Scrabble value: %d\n",compute_scrabble_value(word));
    return 0;
}




