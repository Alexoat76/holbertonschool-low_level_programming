/*
 * File: main.h
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>

/**
 * Desc: Header file containing prototypes for all functions,
 *       used in the 0x07. C - Even more pointers, arrays and strings| project.
 */

int _putchar(char);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* _MAIN_H_ */
