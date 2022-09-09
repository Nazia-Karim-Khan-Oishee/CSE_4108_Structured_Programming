#include <stdio.h>

int main()
{
    char ch,str[100];
    int j=0,d;
    printf("Enter the massege to be encryted:");
     while((ch=getchar())!='\n')
    {
        str[j]=ch;
        j++;
    }
    printf("Enter shift:");
    scanf("%d",&d);
    printf("Encrypted message: ");
    j=0;
    while(str[j]!='\0')
    {
       if(isalpha(str[j]))
        {
            str[j]=str[j]+d;
            if(str[j]<='z' && str[j]>='a' || str[j]<='Z' && str[j]>='A')
           {
            printf("%c",str[j]);
           }
           else
           {
               str[j]=str[j]-26;
               printf("%c",str[j]);
           }
        }
        else
        {
            printf("%c", str[j]);
        }
        j++;
    }
    return 0;

}
