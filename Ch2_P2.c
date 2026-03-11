/* If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred. */

#include<stdio.h>

int main()
{
    float CP, SP, profit, loss;

    printf("Enter Cost Price = ");
    scanf("%f", &CP);

    printf("Enter Selling Price = ");
    scanf("%f", &SP);

    if (SP > CP)
    {
        profit = SP - CP;
        printf("Seller made Profit = %.2f\n", profit);
    }
    else if (CP > SP)
    {
        loss = CP - SP;
        printf("Seller incurred Loss = %.2f\n", loss);
    }
    else
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}