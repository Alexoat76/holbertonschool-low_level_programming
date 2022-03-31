/*
 * File: 4-print_most_numbers.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_most_numbers - Prints the numbers,
* from 0 to 9, except to print 2 and 4
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
