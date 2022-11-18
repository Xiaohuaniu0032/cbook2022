#include <stdio.h>
#include <ctype.h>

// https://www.programiz.com/c-programming/library-function/ctype.h/tolower

int main()
{
    char c, result;

    c = 'M';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = 'm';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = '+';
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;
}