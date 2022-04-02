/*
 * File: 0-strcat.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* _strcat - Concatenates two strings.
* @src: string to append to dest.
* @dest: string to append by src
*Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
