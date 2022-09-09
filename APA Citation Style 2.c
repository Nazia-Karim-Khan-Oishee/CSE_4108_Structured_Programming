#include<stdio.h>
#include<string.h>
void reverse_name(char *name){

    char ch;
    int i=0;
    while((ch=name[i])==' ')
    {
        i++;
    }
    char firstname=ch;
    while ((ch=name[i])!=' ')
    {
        i++;
    }
    while ((ch=name[i])!='\n')
    {
        if(ch!=' ')
        {
            printf("%c",ch);
            }
        i++;
        }
printf(", %c.",firstname);
}
int main()
{
    char name[500];
    printf("Enter first and last name: ");
    fgets(name,500,stdin);
    reverse_name(name);
    return 0;
}
