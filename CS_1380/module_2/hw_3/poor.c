#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age = 10;
    long height = 100000000L;
    char vehicle[] = "quad";
    float real_height = 8.5;

    printf("When I was %d I was riding my %s with my dad. I went a way I hadn't before and ended up driving off a cliff that felt like it was %ld feet tall. In reality it was only about %f feet tall. Luckily I didn't break anything and just bruised my back horribly.\n", age, vehicle, height, real_height);
    printf("The size of my long int is: %zu bytes.\n", sizeof height);

    printf("To use stdlib.h I'll make a random number which is %d.\n", rand());
    return 0;
};