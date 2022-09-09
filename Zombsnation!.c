#include<stdio.h>
#include<string.h>
void lyrics(char string[ ], int length)
{
    scanf("%s", string);
    printf("Output : ");
    for(int i=0; i<length; i++)
    {
        if(string[i]=='d' && string[i+1]=='u' && string[i+2]=='b')
        {
            i=i+2;
            if(i!=2)
            {
                printf(" ");
            }
        }
        else
        {
            printf("%c",string[i]);
        }

    }
}
int main()
{
    int length;
    printf("Enter length : ");
    scanf("%d", &length);
    char str[length];
    lyrics(str,length);
    return 0;
}
