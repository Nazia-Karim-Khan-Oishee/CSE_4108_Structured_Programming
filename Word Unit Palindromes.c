#include<stdio.h>
int main()
{
    char arr[81],ch,sign='.';
    int j=0,count=0;
    printf("Enter a sentence: ");
    while((ch=getchar())!='\n' )
    {
        if(ch=='.'||ch=='?'||ch=='!')
        {
            sign=ch;
            break;
        }
        arr[j]=ch;
        j++;

    }
    printf("\n");
    printf("Revarsal of the sentence: ");

    for(int i=j; i>=0; i--)
    {
        if(arr[i-1]!=' ' && i!=0)
        {
            count++;
        }
        else
        {
            int k=i;
            //count++;
            while(count--)
            {
                printf("%c",arr[k]);
                k++;
            }
            printf(" ");
            count=0;
        }
    }
    printf("%c",sign);
   // printf("\n");

    return 0;

}
