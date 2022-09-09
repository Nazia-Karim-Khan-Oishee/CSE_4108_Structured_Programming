#include<stdio.h>
#include<string.h>
void reverse(char *message){

        char temp,*p=&message[0];

        char *q=&message[strlen(message)-1];

     for( p=p,q=q; p<=q; p++,q--)
    {       temp=*p;
           *p=*q;*q=temp;
    }
}
int main(){

    char message[200];
    printf("Enter the message: ");
    scanf("%s",message);
    reverse(message);
    printf("Reversal is: %s", message);
    return;

}
