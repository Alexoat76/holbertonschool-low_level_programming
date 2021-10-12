/*
 * File: 3-puts.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* _puts - Prints a string, followed by a new line, to stdout.
* @str: string to print.
*/

void _puts(char *str)
{
while (*str != '\0')
_putchar(*str++);
_putchar('\n');
}
