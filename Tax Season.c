#include<stdio.h>

double tax(double i){

            double t;
            if(i<=750){
                t=i*0.01;
                return t;
            }
            else if(i>750 && i<=2250){
                t= 7.50 + ((i-750)*0.02);
                return t;
            }
            else if(i>2250 && i<=3750){
               t=37.50 + ((i-2250)*0.03);
                return t;
            }
            else if(i>3750 && i<=5250){
                t=82.50 + ((i-3750)*0.04);
                return t;
            }
            else if(i>5250 && i<=7000){
                t=142.50 + ((i-5250)*0.05);
                return t;
            }

            else{
                t=230.00 + ((i-7000)*0.06);
                return t;
            }

}

int main(){
            double i;

            printf("Enter income : ");
            scanf("%lf",&i);
            printf("Tax due is %.2lf",tax(i));

            return 0;
}


