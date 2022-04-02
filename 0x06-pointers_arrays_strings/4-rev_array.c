/*
 * File: 4-rev_array.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: The array of integers to be reversed.
* @n: Number of elements of array.
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
