/*
 * File: 0-sum_them_all.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *Return: 0, If n == 0.
 *         Otherwise - the sum of all parameters.
*/


int sum_them_all(const unsigned int n, ...)
{
va_list numb;
unsigned int i;
int sum = 0;
va_start(numb, n);
for (i = 0; i < n; i++)
sum += va_arg(numb, int);
va_end(numb);
return (sum);
}
