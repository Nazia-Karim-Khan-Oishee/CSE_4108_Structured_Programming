
#include<stdio.h>
int main()
{

    float length=0, count=0,average;
    char c;
    printf("Enter a sentence: ");
    while(1)
    {
        c=getchar();
        if(c=='\n')
        {
            break;
        }
        if(c==' ')
        {
            count=count+1;
        }
        else
        {
            length=length+1;
        }


    }
    average=length/(count+1);
    printf("Average word length is %.1f",average);
    return 0;


}
