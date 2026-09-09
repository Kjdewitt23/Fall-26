#include <stdio.h>

int main()
{
    int age = 0;
    int day = 1;
    char category;
    int basePrice = 0;

    printf("Enter your age: \n");
    if (scanf("%d", &age) < 0 || age > 120)
    {
        printf("Age must be between 0 and 120. \n");
        return 1;
    };

    printf("Enter the day code: \n");
    if (scanf("%d", &day) < 1 || day > 7)
    {
        printf("Day code must be between 1 and 7. \n");
        return 1;
    };

    printf("Enter the category (G/S/F): \n");
    scanf(" %c", &category);

    if (category != 'G' && category != 'S' && category != 'F')
    {
        printf("Category must be either G, S, or F. \n");
        return 1;
    }

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