/*
 * File: 100-prime_factor.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdio.h>

/**
 * main - Prints the largest prime
 *        factor of the number 612852475143.
 * Return: Always 0.
*/

int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%li\n", num);
	return (0);
}
