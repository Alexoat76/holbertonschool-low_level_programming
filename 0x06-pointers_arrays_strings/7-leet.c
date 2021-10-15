/*
 * File: 7-leet.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* leet  - Encodes a string into 1337.
* @str: string to encode.
* Return: Address of str.
*/

char *leet(char *str)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";
for (i = 0; *(str + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (a[j] == *(str + i))
*(str + i) = b[j];
}
}
return (str);
}
