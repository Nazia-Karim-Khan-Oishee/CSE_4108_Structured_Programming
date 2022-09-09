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
  printf("\n");
  printf("Repeated digits : ");
  for(int i=0;i<10;i++)
  {
      if(digit[i]>1)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
