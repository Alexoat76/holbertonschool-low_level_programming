/*
 * File: 2-strncpy.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* _strncpy - Copies a string, (copies n bytes of src to the dest string).
* @src: string being copied.
* @dest: string to copy to.
* @n: Largest number of bytes to copy.
* Return: a pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
