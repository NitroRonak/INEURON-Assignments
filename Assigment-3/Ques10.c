// Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main(){
    int costPrice,sellingPrice;
    printf("Enter the Cost Price\n");
    scanf("%d",&costPrice);
    printf("Enter the Selling Price\n");
    scanf("%d",&sellingPrice);
    if(costPrice==sellingPrice){
        printf("Nor Profit or Nor Loss\n");
    }
    else if(sellingPrice>costPrice){
        printf("Profit = %d",(sellingPrice-costPrice));
    }
    else{
        printf("Loss = %d",(costPrice-sellingPrice));
    }
    return 0;
}