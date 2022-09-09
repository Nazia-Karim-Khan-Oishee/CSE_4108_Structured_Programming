#include<stdio.h>

int main( )
{
    char first[30],last[20];
    printf("Enter first and last name: ");
    scanf("%s%s", first,last);
    printf("Output: ");
    printf("%s,", last);
    printf(" ");
    printf("%c.", first[0]);
    return 0;
}
