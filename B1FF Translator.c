#include<stdio.h>
int main ( )
{
    char arr[100];
    printf("Enter message: ");

    gets(arr);
    int length=strlen(arr);
    printf("In B1FF-speak: ");
    for(int j=0; j<length; j++)
    {
        arr[j]=toupper(arr[j]);
        if(arr[j]=='A')
        {
            printf("4");

        }
        else if(arr[j]=='B')
        {
            printf("8");

        }
        else if(arr[j]=='E')
        {
            printf("3");

        }
        else if(arr[j]=='I')
        {
            printf("1");

        }
        else if(arr[j]=='O')
        {
            printf("0");

        }
        else if(arr[j]=='S')
        {
            printf("5");

        }
      else
        {
            printf("%c",arr[j]);
        }
    }
    for(int j=0; j<10; j++)
    {
        printf("!");
    }

    return 0;
}
