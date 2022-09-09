#include<stdio.h>
#include<string.h>
double compute_average_word_length(const char *sentence){

    double alphabets=0,space=1,result;
    int i=0;
    char ch;
    while(1){
        ch=sentence[i];
        if(ch=='\n'){
            break;
        }
        if(ch==' '){
            space++;
        }
      if(ch!=' '){
            alphabets++;
        }
        i++;
        }
   return result=alphabets/(space);
    //return result;
}
int main(){
   char sentence[500];
    printf("Enter a sentence: ");
    fgets(sentence,500,stdin);
    printf("Average word length is: %.2lf",compute_average_word_length(sentence));
     return 0;
     }
