#include "main.h"

/*
 * File: 5-flip_bits.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * flip_bits - number of different bits between two numbers.
 * @n: first number.
 * @m: second number.
 * Return: number of bits you would need to flip.
 * to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;

	}

	return (bits);

}
