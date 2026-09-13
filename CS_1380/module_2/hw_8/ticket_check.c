#include <stdio.h>
/*
    I realized I didn't have a doc string in hw 7. My bad. I changed the 3 scanf's to use do while loops so they would reprompt instead of just exit the program. I also added the check that the rest of the input is discarded after the scanf fails. I saw the importance of this after testing an the category input ran 7 times after I put in a long string as the response.

*/

int main()
{
    int age = 0;
    int day = 0;
    char category;
    int basePrice = 0;

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
    default:
        printf("Invalid category \n");
        return 1;
    }

    if (age < 13)
    {
        printf("Not eligible: under 13 \n");
        return 0;
    }
    else if (day == 6 || day == 7)
    {
        basePrice += 3;
    }
    else if (age >= 65 && day == 3)
    {
        basePrice -= 5;
    }

    if (age >= 18)
    {
        printf("Status: adult \n");
    }
    else
    {
        printf("Status: minor \n");
    }

    printf("Price: $%d", basePrice);
}