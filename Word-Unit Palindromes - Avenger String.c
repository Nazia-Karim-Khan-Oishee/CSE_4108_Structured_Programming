#include<stdio.h>
int main()
{
    char str[30][21];
    char ch,sign='.';
    int i=0;
    int j=0;
    printf("Enter a sentence: ");
    while((ch=getchar())!='\n' )  /// hello   ->i=0,
                                     ///world   ->i=1
    {
        if(ch!=' ')
        {
            if(isalpha(ch))
            {
                str[i][j]=ch;
                j++;
            }
            else
            {
                sign=ch;
            }
        }
        else
        {
            i++;
            j=0;
        }

    }
    str[i][j]='\0';
    int k=i;
    for(i=k; i>=0; i--)
    {
        j=0;
        while(str[i][j]!='\0')
        {
            printf("%c",str[i][j]);
            j++;
        }
       printf(" ");
    }
    printf("%c",sign);
    return 0;
}
