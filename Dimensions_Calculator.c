#include <stdio.h>
#include <math.h>

int main(){

double radius = 0.0f;
double area = 0.0f;
double surfaceArea = 0.0;
const double PI = 3.14159;
double volume = 0.0;


printf("Enter the radius :");
scanf("%lf" , &radius);

surfaceArea = 4 * PI * pow(radius,2);

volume =(4.0/3.0) * PI * pow(radius,3);

area = PI * pow(radius , 2);

printf("Area: %0.2lf\n" , area);
printf("Surface Area : %lf\n" , surfaceArea);
printf("Volume :%lf\n" , volume);











}