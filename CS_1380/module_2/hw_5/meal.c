#include <stdio.h>

double total(double cost, double tax)
{
    printf("The meal costs: $%.2f \n", cost);

    double tax_amount = cost * tax;
    printf("The amount of tax is: $%.2f \n", tax_amount);

    double total_tax = cost + tax_amount;
    printf("The total including tax is: $%.2f \n", total_tax);

    double tip_10 = total_tax * 1.1;
    double tip_15 = total_tax * 1.15;
    double tip_20 = total_tax * 1.2;
    printf("The total with a 10%% tip is: $%.2f \n", tip_10);
    printf("The total with a 15%% tip is: $%.2f \n", tip_15);
    printf("The total with a 20%% tip is: $%.2f \n", tip_20);

    return 0;
}

int main()
{
    int meal = total(15, 0.075);
    printf("Total worked if meal is 0: %d", meal);
}
