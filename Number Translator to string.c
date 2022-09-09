#include<stdio.h>
#include<string.h>

int main()
{
    printf("Enter two digit number: ");
    int n,arr[2],i=1;
    char *right_digit[ ]= {"one","two","three","four","five","six","seven","eight","nine"};
    char *left_digit[ ]= {"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char *digit[ ]= {"eleven","twelve","thirteen","forteen","fifteen","sixteen",
    "seventeen","eighteen","nineteen"};
    scanf("%d",&n);
    while(n!=0)
    {
        arr[i]=n%10;
        i--;
        n/=10;
    }
      if(arr[1]==0)
    {
        printf("%s",left_digit[arr[0]-1]);
        return 0;
    }
    if(arr[1]!=0 && arr[0]==1)
    {
        printf("%s",digit[arr[1]-1]);
    }
    else
    {
        printf("%s %s",left_digit[arr[0]-1],right_digit[arr[1]-1]);
    }
    return 0;
}
