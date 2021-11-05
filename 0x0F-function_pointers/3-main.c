/*
 * File: 3-main.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
*/

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
int a, b, rsl;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
rsl = f(a, b);
printf("%d\n", rsl);
return (0);
}
