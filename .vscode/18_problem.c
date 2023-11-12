//question :- amake super market er 5 ta jinis er input nite hobe..oii 5 ta jini tax 15% add kore prize ta jog korte hob.. ekhon kota holo user jodi 3 ta item er prize bolle 3 tar ii tax+prize bolle abar chaite parbe na


//chat gpt solluation lets see if its work or not;

#include <stdio.h>
#include <stdlib.h>

void calculateTotalBill();

int main() {
    calculateTotalBill();

    return 0;
}

void calculateTotalBill() {
    int *itemPrices = NULL; // Dynamic array to store item prices
    int numberOfItems = 0; // Number of items
    int totalPrice = 0; // Total price of items
    float tax; // Tax amount
    float totalBill; // Final bill

    // Input item prices dynamically
    while (1) {
        printf("Enter the price of an item (or -1 to finish): ");
        int price;
        scanf("%d", &price);

        // Check if the shopkeeper wants to finish
        if (price == -1) {
            break;
        }

        // Allocate memory for the new item price
        itemPrices = (int *)realloc(itemPrices, (numberOfItems + 1) * sizeof(int));

        if (itemPrices == NULL) {
            printf("Memory allocation failed. Exiting.\n");
            exit(1);
        }

        itemPrices[numberOfItems] = price;
        numberOfItems++;
    }

    // Calculate the total price of items
    for (int i = 0; i < numberOfItems; i++) {
        totalPrice += itemPrices[i];
    }

    // Calculate tax (15%)
    tax = 0.15 * totalPrice;

    // Calculate the final bill
    totalBill = totalPrice + tax;

    // Display the bill to the shopkeeper
    printf("Your total bill is: %.2f\n", totalBill);

    // Free dynamically allocated memory
    free(itemPrices);
}

/* 

#include <stdio.h>

void fun(int s,int t,int u,int v,int w,int x);
int main(){
    int s=6,t=7,u=8,v=9,w=10,x=11;
    fun(s,t,u,v,w,x);

    return 0;
}
void fun(int s,int t,int u,int v,int w,int x){

    
    int all_price= (s+t+u+v+w+x);
    int tax_included=(all_price+(0.15 * all_price));
    printf("you bill is :- %d",tax_included);
}

*/
