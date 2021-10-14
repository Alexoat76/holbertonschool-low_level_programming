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
 *       used in the "0x04-pointers_arrays_strings" directory.
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
