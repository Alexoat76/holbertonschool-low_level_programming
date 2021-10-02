/*
 * File: 9-print_comb.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
* starting from 0
* Return: Always 0.
*/

int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
if (n == 9)
continue;
putchar(',');
putchar(' ');
}
return (0);
}
