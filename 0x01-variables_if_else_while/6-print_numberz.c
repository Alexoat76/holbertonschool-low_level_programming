/*
 * File: 6-print_numberz.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10 starting from 0,
*        only using putchar and without char variables.
* Return: Always 0.
*/

int main(void)
{
int n = '0';
while (n <= '9')
{
putchar (n);
n++;
}
putchar('\n');
return (0);
}
