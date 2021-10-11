/*
 * File: 9-fizz_buzz.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdio.h>

/**
* main - Prints the numbers from 1-100, but for multiples of three,
*        Fizz is printed instead of the number, for multiples of five,
*        Buzz, and for multiples of both three and five, FizzBuzz.
* Each number or word should be separated by a space.
* Return: Always 0.
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
}
else
{
printf("%d", i);
}
if (i != 100)
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
