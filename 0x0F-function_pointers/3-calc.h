#ifndef CALC_H
#define CALC_H
#include<stdio.h>
#include<stdlib.h>

/*
 * File: 3-calc.h
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 * Desc: Header file containing prototypes and data structures
 *       used by the program for all simple operations.
*/

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
