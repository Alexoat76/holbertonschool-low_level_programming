/*
 * File: 0-puts_recursion.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 * Return: void.
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
