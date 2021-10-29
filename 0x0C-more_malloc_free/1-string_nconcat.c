/*
 * File: 1-string_nconcat.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *s;
if (s1 == 0)
s1 = "";
else
{
for (i = 0; s1[i] != '\0'; i++)
continue;
}
if (s2 == 0)
s2 = "";
else
{
for (j = 0; s2[j] != '\0'; j++)
continue;
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);
for (k = 0; s1[k] != '\0'; k++)
s[k] = s1[k];
for (k = 0; s2[k] != '\0'; k++)
s[i + k] = s2[k];
s[i + k] = '\0';
return (s);
}
