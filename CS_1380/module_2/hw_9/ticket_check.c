#include <stdio.h>
/*
    I changed the category do-while to use getchar and included a short while loop just before that to empty the buffer of the previous newLine or blank spaces. I also updated the beginning of the function to include the price list. Finally, I changed the output to output a formatted receipt that gives the information needed. I had to remove the previous print statements that printed status and price.

*/

int main()
{
    int age = 0;
    int day = 0;
    char category;
    char *categoryName;
    int basePrice = 0;

    printf("Base Prices\n");
    printf("%-10s $%d\n", "General:", 18);
    printf("%-10s $%d\n", "Senior:", 10);
    printf("%-10s $%d\n", "Family:", 12);

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

    while (getchar() != '\n')
        ;

    do
    {
        printf("Enter the category (G/S/F): \n");
        category = getchar();

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
        categoryName = "General";
        break;
    case 'S':
        basePrice = 10;
        categoryName = "Student";
        break;
    case 'F':
        basePrice = 12;
        categoryName = "Faculty";
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

    printf("======= TICKET =======\n");
    printf("%-15s%d\n", "Age:", age);
    printf("%-15s%s\n", "Status:", age >= 18 ? "adult" : "minor");
    printf("%-15s%s\n", "Category:", categoryName);
    printf("%-15s%d\n", "Day:", day);
    printf("%-15s$%d\n", "Price:", basePrice);
    printf("======================\n");
}