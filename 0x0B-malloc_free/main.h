/*
 * File: main.h
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

/**
 * Desc: Header file containing prototypes for all functions,
 *       used in the "0x0B-malloc, free" directory.
 */

int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
