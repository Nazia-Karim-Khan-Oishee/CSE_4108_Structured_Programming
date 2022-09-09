#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(int argc, char *argv[]){
  char *planets[ ] = {"mercury", "venus", "earth",
                     "mars", "jupiter", "saturn",
                     "uranus", "neptune", "pluto"};
  int i,j;
  for (i=1; i<argc; i++)
    {
    for(int a=0;a<strlen(argv[i]);a++)
    {
        argv[i][a]=tolower(argv[i][a]);
    }
    for(j=0;j<9; j++)
    {
      if (strcmp(argv[i], planets[j])==0)
       {
        printf("%s is planet %d\n",argv[i], j+1);
        break;
      }
    }
    if (j==9)
      printf("%s is not a planet\n", argv[i]);
  }
   return 0;
}

