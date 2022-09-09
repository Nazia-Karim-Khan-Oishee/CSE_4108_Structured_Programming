#include<stdio.h>
void pay_amount(int dollars , int *twenties , int *tens ,
                int *fives , int *ones)
{
    *twenties=dollars/20;
    int a= dollars%20;
    *tens=(a)/10;
    int b=(a)%10;
    *fives=(b)/5;
    int c=b%5;
    *ones=(c)/1;
}
int main()
{
    int dollars,twenties,tens,fives,ones;
    printf("Enter an amount in dollars : ");
    scanf("%d",&dollars);
    pay_amount(dollars,&twenties,&tens,&fives,&ones);
    printf("The number of $20 dollars notes: %d\n", twenties);
    printf(" The number of $10 dollars notes: %d\n", tens);
    printf("The number of $5 dollars notes: %d\n", fives);
    printf("The number of $1 dollar notes: %d\n", ones);
    return 0;
}
