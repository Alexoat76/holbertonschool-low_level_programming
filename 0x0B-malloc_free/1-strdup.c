/*
 * File: 1-strdup.c.
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
char *a;
int i, c;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
;
a = malloc(i * sizeof(*a) + 1);
if (a == NULL)
{
return (NULL);
}
for (c = 0; c < i; c++)
a[c] = str[c];
a[c] = '\0';
return (a);
}
