#include <stdio.h>
#include <ctype.h>


int main( )
{
    char ch[15], out[15];
    int j=0;

    printf("Enter phone number: ");

    scanf("%s", ch);
    for(j=0; j<15; j++)
    {
        if (ch[j]=='A' || ch[j]=='B' || ch[j]=='C')
        {
            out[j]='2';
        }
        else if (ch[j]=='D' || ch[j]=='E' || ch[j]=='F')
        {
            out[j]='3';
        }
        else if (ch[j]=='G' || ch[j]=='H' || ch[j]=='I')
        {
            out[j]='4';

        }
        else if (ch[j]=='J' || ch[j]=='K' || ch[j]=='L')
        {
            out[j]='5';
        }
        else if (ch[j]=='M' || ch[j]=='N' || ch[j]=='O')
        {
            out[j]='6';
        }
        else if (ch[j]=='P' || ch[j]=='R' || ch[j]=='S')
        {
            out[j]='7';
        }
        else if (ch[j]=='T' || ch[j]=='U' || ch[j]=='V')
        {
            out[j]='8';
        }
        else if (ch[j]=='W' || ch[j]=='X' || ch[j]=='Y')
        {
            out[j]='9';
        }
        else
        {
            out[j]=ch[j];
        }


    }
    for(int j=0; j<15; j++)
    {
        printf("%c", out[j]);
    }
    return 0;
}
