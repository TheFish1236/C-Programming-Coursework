#include <stdio.h>

int main()
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    float total;
    printf("Number of quarters: ");
    scanf("%d", &quarters);
    printf("Number of dimes: ");
    scanf("%d", &dimes);
    printf("Number of nickels: ");
    scanf("%d", &nickels);
    printf("Number of pennies: ");
    scanf("%d", &pennies);
    total = (quarters * 0.25) + (dimes * 0.10) + (nickels * 0.05) + (pennies * 0.01);
    printf("Total: %.2f", total);
}