/*
 * File: 0-positive_or_negative.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints a random number when the number stored in the variable n
* is positive or negative, or zero.
* Return: Always 0.
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
(n < 0)
{
printf("%i is negative\n", n);
}

return (0);
}
