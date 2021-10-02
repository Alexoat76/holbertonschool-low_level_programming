/*
 * File: 101-print_comb4.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all possible different combinations of three digits..
* Return: Always 0.
*/

int main(void)
{
int n, m, p;

for (n = 0; n < 8; n++)
{
for (m = n + 1; m < 9; m++)
{
for (p = m + 1; p < 10; p++)
{
putchar((n % 10) + '0');
putchar((m % 10) + '0');
putchar((p % 10) + '0');
if (n == 7 && m == 8 && p == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
