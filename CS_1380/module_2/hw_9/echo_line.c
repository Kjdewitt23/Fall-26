#include <stdio.h>

int main()
{
    int readChar = 0;
    int ch;

    printf("Write a word: ");

    while ((ch = getchar()) != EOF && ch != '\n')
    {
        putchar(ch);
        readChar++;
    }

    printf("\nCharacters: %d\n", readChar);
}