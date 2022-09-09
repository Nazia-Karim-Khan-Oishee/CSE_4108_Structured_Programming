#include<stdio.h>
int main()
{

    char ch='a';
    char *pc=&ch;
    int i=1;
    int *pi=&i;
    double d=2.500000;
    double *pd=&d;
    printf("The address of char ch is 0x%x\n",&ch);
    printf("The address of int i is 0x%x\n",&i);
    printf("The address of double d is 0x%x\n",&d);
    printf("The address of char *pc is 0x%x\n",&pc);
    printf("The address of int *pi is 0x%x\n",&pi);
    printf("The address of double *pd is 0x%x\n",&pd);
    printf("The value of char ch is %c\n",*pc);
    printf("The value of int i is %d\n",*pi);
    printf("The value of double d is %lf\n",*pd);
    printf("The value of char *pc is %d\n",pc);
    printf("The value of int *pi is %d\n",pi);
    printf("The value of double *pd is %d\n",pd);
    printf("The size of char ch is %d\n",sizeof(ch));
    printf("The size of int i is %d\n",sizeof(i));
    printf("The size of double d is %d\n",sizeof(d));
    printf("The size of char *pc is %d\n",sizeof(pc));
    printf("The size of int *pi is %d\n",sizeof(pi));
    printf("The size of double *pd is %d\n",sizeof(pd));
    return 0;
}
