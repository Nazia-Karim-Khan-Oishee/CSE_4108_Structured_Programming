
#include <stdio.h>

int main() {
     int k=1;
     long double result = 1;
        while(1)
        {
            k=k+1;
        result=result*k;
        if(result>32767){break;}
          }

    printf("The largest value of n for short is:%d\n",k-1);


     while(1)
        {
        if(result>2147483647){break;}
        else {k=k+1;
        result=result*k;
        }
        }

    printf("The largest value of n for int is: %d\n",k-1);

     while(1)
        {
        if(result>2147483647){break;}
        else {k=k+1;
        result=result*k;

        }
        }

    printf("The largest value of n for long int is: %d\n",k-1);
        while(1)
        {
        if(result>9223372036854775807){break;}
        else {k=k+1;
        result=result*k;

        }
        }

    printf("The largest value of n for long long int is: %d\n",k-1);

      while(1)
        {
        if(result>3.4E+38){break;}
        else {k=k+1;
        result=result*k;

        }
        }

    printf("The largest value of n for float is: %d\n",k-1);

      while(1)
        {
        if(result>1.7E+308){break;}
        else {k=k+1;
        result=result*k;

        }
        }

    printf("The largest value of n for double is: %d\n",k-1);
        while(1)
        {
        if(result>1.7E+308){break;}
        else {k=k+1;
        result= result*k;

        }
        }

    printf("The largest value of n for long double is: %d",k-1);


    return 0;
}
