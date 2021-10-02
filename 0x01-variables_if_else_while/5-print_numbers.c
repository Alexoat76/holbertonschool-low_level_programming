/*
 * File: 5-print_numbers.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the alphabet in lowercase.
* Return: Always 0.
*/

int main(void)
{
int n = 0;
while (n < 10)
{
printf("%d", n);
n++;
}
putchar('\n');
return (0);
}
