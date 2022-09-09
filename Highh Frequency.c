#include <stdio.h>

int main()
{
  int digit[10]={0},in,temp,x;
  printf("Enter  a positive number:");
  scanf("%d",&in);
  while(in>0)
  {
      x=in%10;
      temp=x;
      digit[temp]++;
      in=in/10;
  }
  printf("Digit:         ");
  for(int i=0;i<10;i++)
  {
       printf("%d ",i);
  }
  printf("\n");
  printf("Occurrences:   ");
  for(int i=0;i<10;i++)
  {
      printf("%d ",digit[i]);
  }
  return 0;
}
