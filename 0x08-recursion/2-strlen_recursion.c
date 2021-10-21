/*
 * File: 2-strlen_recursion.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count.
 * Return: length of the string.
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
