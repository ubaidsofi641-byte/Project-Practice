#include <stdio.h>

int main(){
float fahrenheit , celsius, kelvin;


printf("What is the temperature in Fahrenheit?: ");
    scanf("%f" , &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    kelvin = celsius + 273.15;


    printf("Celsius : %.2f\n" , celsius);
    printf("Kelvin : %.2f\n" , kelvin);



    return 0;



}