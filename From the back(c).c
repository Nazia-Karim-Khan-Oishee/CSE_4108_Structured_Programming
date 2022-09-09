#include<stdio.h>
int main()
{
   printf("Enter the message: ");
   char string[100],ch;
   int i=0;
   while(1)
   {   scanf("%c", &ch);
   if(ch=='\n')
   {
       break;
   }
       *(string+i)=ch;
        i++;
   }
   printf("Reversal is: ");
   for( i=i-1;i>=0;i--)
   {
      printf("%c",*(string+i));
   }
  return 0;
}
