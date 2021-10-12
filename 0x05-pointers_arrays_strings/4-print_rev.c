/*
 * File: 4-print_rev.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* print_rev - Prints a string, in reverse, followed by a new line.
* @s: string to reverse.
*/

void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
