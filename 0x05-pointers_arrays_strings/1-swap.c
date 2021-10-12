/*
 * File: 1-swap.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* swap_int - Swaps the values of integers.
* @a: first integer to be swap.
* @b: second integer to be swap.
*/

void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
