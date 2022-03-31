/*
 * File: 6-print_line.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* @n: Number of "_" characters to be printed.
*/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
