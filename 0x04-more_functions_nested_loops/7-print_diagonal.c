/*
 * File: 7-print_diagonal.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_diagonal - Draws a diagonal line using the "\" character.
* @n: Number of "\" characters to be printed.
* Return: If n is 0 or less, the function should only print a \n
*/

void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= n; j++)
{
if (i == j)
{
_putchar('\\');
break;
}
_putchar(' ');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
