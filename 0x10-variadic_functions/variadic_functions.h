#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/*
 * File: variadic_functions.h
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x10 - Variadic functions directory.
 */

/**
 * struct printer - A new struct type defining a printer.
 * @tpar: A type of parameter printed.
 * @pf: A function pointer to a function that prints
 *        a type of parameter.
*/

typedef struct printer
{
char *tpar;
void (*pf)(va_list);
} printer_tpar;


int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
