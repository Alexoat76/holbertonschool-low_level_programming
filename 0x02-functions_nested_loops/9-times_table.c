/*
 * File: 9-times_table.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0.
*/

void times_table(void)
{
int n, m, p;
for (n = 0; n <= 9; n++)
{
_putchar('0');
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
p = n * m;
if (p <= 9)
_putchar(' ');
else
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
