/*
 * File: 9-fizz_buzz.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdio.h>

/**
* main - prints the numbers from 1 to 100, followed by a new line.
* But for multiples of three print Fizz instead of the number and for
* the multiples of five print Buzz. For numbers which are multiples of
* both three and five print FizzBuzz.
* Return: Always 0.
*/

void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= size - i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
