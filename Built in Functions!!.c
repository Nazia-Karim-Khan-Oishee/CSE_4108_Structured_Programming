#include<stdio.h>

int length(char string[200]){

    int ch=0,i=0;
    while(string[i]!='\0')
        {
        ch++;
        i++;
    }
    return ch;

}
int main(){

    char string1[200],string2[200],string3[200];
    int length1,length2;
    scanf("%s%s",string1,string2);
    length1=length(string1);
    length2=length(string2);
    if(length1+length2>200)
        {
        printf("Buffer overflow\n");
        return 0;
        }
    printf("%d %d\n",length1,length2);
    printf("%s ",string1);
    strcpy(string3,string1);
    for(int j=length1,i=0;j<(length1+length2),i<length2;j++,i++)
    {
        printf("%c",string1[j]=string2[i]);
    }
    printf("\n");
    char c=string3[0];
    string3[0]=string2[0];
    string2[0]=c;
    printf("%s %s\n",string3,string2);
    return 0;
}


