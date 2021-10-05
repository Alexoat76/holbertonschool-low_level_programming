/*
 * File: 6-abs.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include "main.h"

/**
* int_abs - Computes the absolute value of an integer.
* @n: integer checked
* Return: absolute value
*/

int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-n);
}
}
