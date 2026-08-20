#include <stdio.h>

int main(){
int choice;
float kilograms = 0.0f;
float pounds = 0.0f;


printf("Weight conversion calculator\n");
printf("1. Kilograms to Pounds:\n");
printf("2. Pounds to Kilograms\n");
printf("Enter the metric of your choice : ");
scanf("%d", &choice);

if(choice == 1){
    printf("Enter the weight in Kilograms :");
    scanf("%f", &kilograms);
    pounds = kilograms * 2.20;
printf("%.2fKg is equal to %.2flb", kilograms , pounds);
}

else if(choice == 2){
    printf("Enter the weight in pounds: ");
    scanf("%f", &pounds);
    kilograms = pounds / 2.20;
    printf("%.2flb is equal to %.2fKg", pounds , kilograms);



}

else{
    printf("Invalid Choice! Select 1 or 2");
}





















    return 0;

}