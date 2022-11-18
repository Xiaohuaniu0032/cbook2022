/* To convert upper case letter to lower case letter
   char_input.c
*/

#include <stdio.h>
#include <ctype.h> // header file to include character function

int main()
{
   char x;

   x = getchar();
   putchar(x); // Displays a character on the screen
   putchar('\n'); // New line
   putchar(tolower(x)); // Displays a lower case letter

   return 0;
}