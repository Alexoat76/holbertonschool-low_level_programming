/*
 * File: 4-isalpha.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* _isalpha - Checks for alphabetic character.
* @c: character to be checked.
* Return: 1 if c is a letter, lower or uppercase, 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
