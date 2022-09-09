#include<stdio.h>
void encrypt(char *message, int shift)
{
    int i=0;
    printf("Encrypted message: ");
    while(message[i]!='\n')
    {
        if(message[i]==' ' || message[i]=='\'' || message[i]==',' || message[i]=='.')
        {
            printf("%c",message[i]);
        }
        else
        {
            if(message[i]<='z' && message[i]>='a' && message[i]+shift<='z' && message[i]+shift>='a' )
            {
                message[i]=message[i]+shift;
                printf("%c",message[i]);
                i++;
                continue;
            }
            if( message[i]<='Z' && message[i]>='A' && message[i]+shift<='Z' && message[i]+shift>='A')
            {
                message[i]=message[i]+shift;
                printf("%c",message[i]);
                i++;
                continue;
            }
            message[i]=message[i]+shift-26;
            printf("%c",message[i]);
        }
        i++;
    }
}

int main()
{

    char ch;
    char message[500];
    int i;
    printf("Enter a message to be encrypted: ");
    fgets(message,500,stdin);
    printf("Enter shift amount: ");
    scanf("%d",&i);
    encrypt(message,i);
    return 0;
}


