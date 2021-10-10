/*
 * File: 101-print_number.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_triangle - Prints an integer.
* @n: integer to be printed.
*/

void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
_putchar(num / 10);
_putchar((num % 10) + '0');
}
