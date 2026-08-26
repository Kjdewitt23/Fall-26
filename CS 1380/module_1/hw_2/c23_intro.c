#include <stdio.h>

// According to the documentation, C23 doesn't need void to be given as an argument. It infers it as empty and not an unspecified amount of parameters.
int main()
{
    // This initializes 3 variables. 2 Strings and 1 int. I learned that adding the asterisk before the variable name makes the char essentially a const as it isn't mutable.
    char *occupation = "Software developers";
    char *language = "C";
    int dev_year = 1972;

    // These printfs print out the statements using placeholders to then insert occupation, language, and dev_year into the statement.
    printf("%s are the main people who use C.\n", occupation);
    printf("%s is a low-level programming language.\n", language);
    printf("C was created in %d.", dev_year);

    return 0;
}