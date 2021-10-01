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

if ((n % 10) > 5)
{
printf("and is greater than 5\n");
}
else if ((n % 10) == 0)
{
printf("and is 0\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);
}
