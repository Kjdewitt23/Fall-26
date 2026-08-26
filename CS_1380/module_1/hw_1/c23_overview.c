#include <stdio.h>

int main(void)
{
    // This initializes 3 variables. 2 Strings and 1 int.
    char name[] = "Kollin";
    char major[] = "CS";
    int age = 31;

    // This printf prints out the statement using placeholders to then insert name, age, and major into the statement.
    printf("My name is %s and I am %d years old. My major is %s. \n", name, age, major);

    return 0;
}