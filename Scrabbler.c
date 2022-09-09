#include<stdio.h>
int main()
{
    char a;
    int x=0;
    printf("Enter a word:");
    while( (a = getchar()) !='\n')
    {   a=toupper(a);
        if(a=='A' || a=='E' || a=='I' ||a=='L' || a=='N' || a=='O'|| a=='R' || a=='S' || a=='T' || a=='U')
        {
            x=x+1;
        }
        else if (a=='D'  || a=='G')
        {
            x=x+2;
        }
        else if(a=='B' || a=='C' || a=='M' || a=='P')
        {
            x=x+3;
        }
        else if(a=='F' || a=='H' || a=='V' || a=='W' || a=='Y')
        {
            x=x+4;
        }
        else if(a=='K')
        {
            x=x+5;
        }
        else if(a=='J' || a=='X')
        {
            x=x+8;
        }
        else if(a=='Q' || a=='Z')
        {
            x=x+10;
        }
    }
    printf("Scrabble value : %d", x);
    return 0;
}
