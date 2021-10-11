/*
 * File: 1-isdigit.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* _isdigit - Checks for a digit (0 through 9).
* @c: Number to be checked.
* Return: 1 if the number is a digit, 0 otherwise.
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
