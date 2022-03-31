/*
 * File: 7-puts_half.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line.
* @str: string to print.
*/

void puts_half(char *str)
{
	int j, i = 0;

	while (*(str + i))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
