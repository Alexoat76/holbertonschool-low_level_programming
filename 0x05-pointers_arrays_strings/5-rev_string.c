/*
 * File: 5-rev_string.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* rev_string - Reverses a string.
* @s: string to reverse.
*/

void rev_string(char *s)
{
int i, j;
char str[200];
i = j = 0;
while (s[i] != '\0')
{
str[i] = s[i];
i++;
}
i--;
while (i >= 0)
{
s[i] = str[j];
i--;
j++;
}
s[j++] = '\0';
}
