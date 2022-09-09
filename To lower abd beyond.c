#include<stdio.h>

void read_string(char ch[ ],int length)
{
    scanf("%s",ch);
}

char to_lowercase(char ch)
{

    if(ch<='Z' && ch>='A')
    {
        ch=ch-'A'+'a';
    }
    return ch;

}

void print_string(char ch[],int length)
{
    int i;
    printf("String in lowercase : ");
    for(i=0; i<length; i++)
    {
        printf("%c",ch[i]);
    }

}
int main()
{

    int length,i=0;
    char ch[100];
    printf("Enter string length: ");
    scanf("%d",&length);
    printf("Enter a string: ");
    read_string(ch,length);
    while(i<length)
    {
        ch[i]=to_lowercase(ch[i]);
        i++;
    }
    print_string(ch,length);
    return 0;
}
