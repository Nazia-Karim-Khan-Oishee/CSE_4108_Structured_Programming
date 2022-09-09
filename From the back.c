#include<stdio.h>
#include<string.h>
int main()
{   char string[100];
   printf("Enter a message: ");
   gets(string);
   int length=strlen(string);
   printf("Reversal is: ");
   for(int i=length-1;i>=0;i--)
   {
       printf("%c", string[i]);
   }
   return 0;
}
