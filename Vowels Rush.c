#include<stdio.h>
int main()
{
   int x=0;
   char c;
    printf("Enter a sentence: ");
    while( (c=getchar()) !='\n')
    {   c=tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u')
        {
            x++;
        }
    }
    printf("Your sentence contains %d vowels.", x);
    return 0;
}
