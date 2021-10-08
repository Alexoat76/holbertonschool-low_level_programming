/*
 * File: 5-more_numbers.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* more_numbers - Prints 10 times the numbers, from 0 to 14,
* followed by a new line.
*/

void more_numbers(void)
{
int number, counter;
for (counter = 0; counter <= 9; counter++)
{
for (number = 0; number <= 14; number++)
{
if (number > 9)
_putchar((number / 10) + '0');
_putchar((number % 10) + '0');
}
_putchar('\n');
}
}
