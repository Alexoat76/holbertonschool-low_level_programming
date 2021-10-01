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
char last[] = "Last digit of";
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("greater than 5\n");
}
else if (n % 10 == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
