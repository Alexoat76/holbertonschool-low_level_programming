/*
 * File: 0-malloc_checked.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
 * malloc_checked - allocate memory using malloc.
 * Description: If malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 * Return: void pointer to malloc'd memory space
 */

void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
