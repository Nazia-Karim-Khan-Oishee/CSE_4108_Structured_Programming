
#include<stdio.h>
int main(){
        double n,sum=0;
        while(1){
                printf("Enter a number : ");
            scanf("%lf",&n);
            if(n<=0){
                break;
            }
            sum=sum+n;
        }

        printf("%.2lf",sum);
        return 0;
}
