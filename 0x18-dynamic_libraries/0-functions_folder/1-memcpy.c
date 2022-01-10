/*
 * File: 1-memcpy.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: destination of copy.
 * @src: memory area to copy.
 * @n: number of bytes to copy.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
