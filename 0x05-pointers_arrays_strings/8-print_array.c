/*
 * File: 8-print_array.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"
#include <stdio.h>

/**
* print_array - Prints n elements of an array of integers.
* @a: array to print.
* @n: number of elements to print.
*/

void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}
printf("\n");
}
