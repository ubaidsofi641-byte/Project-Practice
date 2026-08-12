
#include <stdio.h>
#include <string.h>

int main() {

    //shopping cart program for food
    char item[50] = "";
    int quantity = 0;
    float price = 0.0f;
    char currency = '$';
    float total = 0.0f;

     printf("What item would you like to buy?: ");
     fgets(item, sizeof(item), stdin);
item[strlen(item) - 1] = '\0';
     printf("What is the price of each?:");
     scanf("%f", &price);


     printf("How many would you like to buy?:");
     scanf("%d" , &quantity);

total = price * quantity;

printf("\n You have bought %d %s/s\n" , quantity , item);
printf("The total is: %c%.2f", currency , total );








return 0;
}
