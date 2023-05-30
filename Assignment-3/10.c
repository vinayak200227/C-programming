// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main(){
   float cost_price, selling_price, diff;
   printf("Enter cost price:\n");
   scanf("%f",&cost_price);
   printf("Enter selling price:\n");
   scanf("%f",&selling_price);
   diff = selling_price - cost_price;
   if(diff > 0)
        printf("Profit is %.2f %% .",diff/cost_price *100);
    else
        printf("Loss is %.2f %% .",(-1)*diff/cost_price*100);
    return 0;
}
