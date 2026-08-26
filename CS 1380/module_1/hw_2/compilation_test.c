#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool renew = false;
    int weeks_left = 10;
    char status[] = "member";

    if (weeks_left > 0 && renew == false)
    {
        printf("Would you like to renew?\n");
    }
    else if (weeks_left == 0 && renew == true)
    {
        printf("Thank you for renewing!");
    }
    else
    {
        char status[] = "not_member";
        printf("We'll miss you!");
    }

    return 0;
};
