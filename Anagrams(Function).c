#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>


int s1[26]= {0};
int s2[26]= {0};


void read(int string[26]){

     char c[100];
     int i=0;
     int j;
     scanf("%s",c);
     while(c[i]!='\0')
     {
        if(c[i]<='Z' && c[i]>='A')
        {
            j=c[i]-65;
            string[j]++;
        }
        else
        {
            j=c[i]-97;
            string[j]++;
        }
        i++;
     }


}

bool equal_array(int word_1[26],int word_2[26]){
    int i;
    for(i=0; i<26; i++)
    {
        if(word_1[i]!=word_2[i])
        {
            return false;
        }

    }
    return true;

}
int main()
{

    printf("Enter first word : ");
    read(s1);
    printf("Enter second word : ");
    read(s2);
    if(equal_array(s1,s2)){
        printf("This is an anagram.");
    }
    else{
        printf("This is not an anagram.");
    }

return 0;
}
