/*
 * File: 1-array_iterator.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
