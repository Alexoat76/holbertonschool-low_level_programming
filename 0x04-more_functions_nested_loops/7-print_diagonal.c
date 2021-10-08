/*
 * File: 7-print_diagonal.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal,
* to be use the character "\" for be printed.
* @n: number of characters to be draw.
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
