#include "main.h"

/*
 * File: 1-print_binary.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
