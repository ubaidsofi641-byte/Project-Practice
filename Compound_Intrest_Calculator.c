#include <stdio.h>
#include <math.h>

int main(){
    double principal ;
    double rate ;
    int years ;
    int timescompounded ;
    double total ;

    printf("Compound intrest calculator\n");

    printf("Enter the principal : ");
    scanf("%lf", &principal);

printf("Enter the inrest rate (in percentage) : ");
scanf("%lf", &rate);
rate = rate / 100;

    printf("Enter the number of years : ");
    scanf("%d", &years);

    printf("Enter the times compounded per year : ");
    scanf("%d" , &timescompounded );

    total = principal * pow(1 + rate / timescompounded, timescompounded * years);

    printf("After %d years, the total will be %.2lf ", years , total);


























    return 0;
}