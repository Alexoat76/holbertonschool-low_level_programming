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
char *ptr;
unsigned int i, j, newChar, k;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] !='\0'; i++)
;
for (j = 0; s2[j] !='\0'; j++)
;
j > n ? (j = n) : (n = j);
newChar = (i + j + 1);
ptr = malloc(sizeof(char) * newChar);
if (ptr == NULL)
return (NULL);
for(k=0; s1[k] !='\0'; k++)
ptr[k]=s1[k];
for(k=0; s2[k] !='\0'; k++)
ptr[i+k]=s2[k];
ptr[i+k]='\0';
return (ptr);
}
