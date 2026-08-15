#include <stdio.h>

int main(){

int principal = 100000;
float intrest = 5;
int time = 4;
float simple_intrest = 0;
char currency = '$';



printf("What is the principal amount for your loan(in $)?:");
scanf("%d" ,  &principal);

printf("What is the rate of intrest the bank will be charging? (in percentage):");
scanf("%f", &intrest);

printf("What is the amount of time you will be taking the loan for?(in years):");
scanf("%d" , &time );

simple_intrest = (principal * intrest * time)/100;

printf(" Your simple intrest wil be %c%.2f\n ", currency , simple_intrest);












return 0;




}