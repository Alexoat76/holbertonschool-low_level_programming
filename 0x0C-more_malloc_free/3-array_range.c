/*
 * File: 3-array_range.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
int *ptr, i;
if (min > max)
return (NULL);
ptr = malloc((max - min + 1) * sizeof(*ptr));
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
ptr[i] = min;
return (ptr);
}
