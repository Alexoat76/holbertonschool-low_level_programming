/*
 * File: 1-alphabet.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_alphabet - Prints the alphabet, in lowercase, followed by a new line.
* Return: Always 0.
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar ('\n');
}
