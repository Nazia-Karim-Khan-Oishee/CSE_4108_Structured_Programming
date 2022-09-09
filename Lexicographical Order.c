#include<stdio.h>
#include<string.h>

int main()
{
    char smallest[20],largest[20],word[20];
    printf("Enter word: ");
    scanf("%s", word);
    strcpy(smallest,word);
    strcpy(largest,word);
   while(1)
    {
        printf("Enter word: ");
        scanf("%s",word);
        int length=strlen(word);
        if(length==4)
        {
            break;
        }

        if(strcmp(smallest,word)>0)
        {
            strcpy(smallest,word);
        }
        else if(strcmp(largest,word)<0)
        {
            strcpy(largest,word);
        }

    }
    printf("Smallest word: %s\n",smallest);
    printf("Largest word: %s",largest);
    return 0;
}
