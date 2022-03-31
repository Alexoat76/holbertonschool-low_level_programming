/*
 * File: 3-print_numbers.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_numbers - Prints the numbers, from 0 to 9,
* followed by a new line.
* Return: Always 0.
*/

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');

	_putchar('\n');
}
