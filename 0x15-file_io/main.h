#ifndef _MAIN_H_
#define _MAIN_H_

/* file control options */
#include <fcntl.h>

/* Count zise */
#include <sys/types.h>
#include <sys/stat.h>

/* miscellaneous libraries */
#include <unistd.h>

/* control input/output functions */
#include <stdlib.h>

/* malloc, free */
#include <stdio.h>

/*
 * File: main.h
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 * Desc: Header file containing prototypes for all functions
 *       in the 0x15. C - File I/O.
 */

/* Prototypes to used for the project. */

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /* _MAIN_H_ */
