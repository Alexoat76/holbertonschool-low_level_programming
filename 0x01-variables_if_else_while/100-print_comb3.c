/*
 * File: 100-print_comb3.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all possible different combinations of two digits
* Return: Always 0.
*/

int main(void)
{
int n, m;

for (n = 0; n < 9; n++)
{
for (m = n + 1; m < 10; m++)
{
putchar((n % 10) + '0');
putchar((m % 10) + '0');
if (n == 8 && m == 9)
continue;

putchar(',');
putchar(' ');

}
}

putchar('\n');

return (0);
}
