/*
 * File: 2-print_alphabet_x10.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet in lowercase,
* followed by a new line.
*/

void print_alphabet_x10(void)
{
int count = 0;
char c;
while (count++ <= 9)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar ('\n');
}
}
