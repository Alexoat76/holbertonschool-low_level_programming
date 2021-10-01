/*
 * File: 0-positive_or_negative.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Description: Prints a number and whether it is positive, negative or zero.
 *
 * Return: 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if (n == 0)
{
printf("%d is zero\n", n);
}

if else(n < 0)
{
printf("%d is negative\n", n);
}
else
(n > 0)
{
printf("%d is positive\n", n);
}
return (0);
}
