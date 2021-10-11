/*
 * File: 8-print_square.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_square - Prints a square with "#" character,
* followed by a new line.
* @size: size
*/

void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
