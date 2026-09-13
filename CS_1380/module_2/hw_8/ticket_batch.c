#include <stdio.h>

/*
    I chose a for loop from 1 through n because it makes it easy to identify each customer by number instead of .
*/

int main()
{
    int n = 0;
    int age = 0;
    int day = 0;
    char category;
    int basePrice = 0;

    int ticketsSold = 0;
    int ineligible = 0;
    int totalRevenue = 0;

    do
    {
        printf("Enter the number of customers (1-10): \n");

        if (scanf("%d", &n) != 1)
        {
            while (getchar() != '\n')
                ;

            printf("Invalid input. Please enter a number.\n");
            n = 0;
        }
        else if (n < 1 || n > 10)
        {
            printf("Number of customers must be between 1 and 10.\n");
        }

    } while (n < 1 || n > 10);

    for (int customer = 1; customer <= n; customer++)
    {
        printf("\nCustomer %d\n", customer);

        do
        {
            printf("Enter your age: \n");

            if (scanf("%d", &age) != 1)
            {
                while (getchar() != '\n')
                    ;

                printf("Invalid input. Please enter a number.\n");
                age = -1;
            }
            else if (age < 0 || age > 120)
            {
                printf("Age must be between 0 and 120.\n");
            }

        } while (age < 0 || age > 120);

        do
        {
            printf("Enter the day code: \n");

            if (scanf("%d", &day) != 1)
            {
                while (getchar() != '\n')
                    ;

                printf("Invalid input. Please enter a number.\n");
                day = 0;
            }
            else if (day < 1 || day > 7)
            {
                printf("Day code must be between 1 and 7.\n");
            }

        } while (day < 1 || day > 7);

        do
        {
            printf("Enter the category (G/S/F): \n");
            scanf(" %c", &category);

            if (category != 'G' && category != 'S' && category != 'F')
            {
                printf("Category must be either G, S, or F.\n");

                while (getchar() != '\n')
                    ;
            }

        } while (category != 'G' && category != 'S' && category != 'F');

        switch (category)
        {
        case 'G':
            basePrice = 18;
            break;

        case 'S':
            basePrice = 10;
            break;

        case 'F':
            basePrice = 12;
            break;
        }

        if (age < 13)
        {
            printf("Not eligible: under 13\n");
            ineligible++;

            continue;
        }

        if (day == 6 || day == 7)
        {
            basePrice += 3;
        }
        else if (age >= 65 && day == 3)
        {
            basePrice -= 5;
        }

        if (age >= 18)
        {
            printf("Status: adult\n");
        }
        else
        {
            printf("Status: minor\n");
        }

        printf("Price: $%d\n", basePrice);

        ticketsSold++;
        totalRevenue += basePrice;
    }

    printf("\nBatch Summary\n");
    printf("Eligible tickets sold: %d\n", ticketsSold);
    printf("Ineligible customers: %d\n", ineligible);
    printf("Total revenue: $%d\n", totalRevenue);

    return 0;
}