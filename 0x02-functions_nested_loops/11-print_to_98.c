/*
 * File: 11-print_to_98.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers from n to 98,
* followed by a new line.
* @n: number to start counting from to 98
* Return: nothing.
*/

void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
printf("%d, ", n);
printf("%d\n", 98);
}
else
{
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("%d\n", 98);
}
}
