/*
 * File: 3-get_op_func.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
*/

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter or NULL
 *         if don't match with operators.
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (ops[i].op[0] == s[0])
return (ops[i].f);
i++;
}
return (NULL);
}
