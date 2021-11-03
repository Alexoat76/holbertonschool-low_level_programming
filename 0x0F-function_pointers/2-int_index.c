/*
 * File: 2-int_index.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 * Return: The index of the first element for which
 *         the cmp function does not return 0.
 *         If no element matches or size <= 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size < 1 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
