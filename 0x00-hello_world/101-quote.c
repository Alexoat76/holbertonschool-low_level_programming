/*
 * File: 101-quote.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints exactly and that piece of art is useful"
 * - Dora Korpar, 2015-10-19
 *
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);
}
