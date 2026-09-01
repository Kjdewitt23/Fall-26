#include <stdio.h>
int main(void)
{
    int apples = 7;
    double price = 0.99;
    double total = apples * price;
    printf("Total cost: %.2f\n", total);

    int dollars = (int)total;
    printf("Whole dollars: %d\n", dollars);

    double average = (apples + 3) / 2.0;
    printf("Average: %.2f\n", average);

    double ratio = (double)apples / 2;
    printf("Ratio: %.2f\n", ratio);

    return 0;
}