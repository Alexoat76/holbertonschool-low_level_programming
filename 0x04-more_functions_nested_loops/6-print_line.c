/*
 * File: 6-print_line.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_line - Draws a straight line in the terminal.
* @n: is the number of times the character '_' should be printed.
* The line should end with a \n.
*/

void print_line(int n)
{
int x;
if (n > 0)
{
for (x = 0; x < n; x++)
_putchar('_');
}
_putchar('\n');
}
