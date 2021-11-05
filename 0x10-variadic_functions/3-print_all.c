/*
 * File: 3-print_all.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_ch - print a char
 * @ch: char to print
 */

void print_ch(va_list ch)
{
printf("%c", va_arg(ch, int));
}

/**
 * print_str - prints a string
 * @str: string to print
 */

void print_str(va_list str)
{
char *s = va_arg(str, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
}

/**
 * print_intgr - prints an integers
 * @intgr: int to print
 */

void print_intgr(va_list intgr)
{
printf("%d", va_arg(intgr, int));
}

/**
 * print_flt - prints a float
 * @flt: float to print
 */

void print_flt(va_list flt)
{
printf("%f", va_arg(flt, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function.
 */

void print_all(const char * const format, ...)
{
unsigned int i, j;
printer_tpar p[] = {
{"c", print_ch},
{"s", print_str},
{"i", print_intgr},
{"f", print_flt},
{NULL, NULL}
};
va_list vaparamet;
char *separator = "";
va_start(vaparamet, format);
i = 0;
while (format && format[i])
{
j = 0;
while (p[j].tpar != NULL)
{
if (*(p[j].tpar) == format[i])
{
printf("%s", separator);
p[j].pf(vaparamet);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(vaparamet);
printf("\n");
}
