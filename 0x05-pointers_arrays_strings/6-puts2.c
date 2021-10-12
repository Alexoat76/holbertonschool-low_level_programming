/*
 * File: 6-puts2.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* puts2 - Prints every other character of a string,
* starting with the first character.
* @str: string to print.
*/

void puts2(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
