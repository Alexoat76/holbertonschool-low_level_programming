/*
 * File: 7-print_last_digit.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_last_digit - Prints the last digit of a number.
* @n: digit in the last position.
* Return: Value of last digit.
*/

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
