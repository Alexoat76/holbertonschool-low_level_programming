#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
 * File: lists.h
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 * Desc: Header file that defines a
 *       new type struct lists.
 */

/**
 * struct list_s - singly linked list
 * @str: string.
 * @len: length of the string.
 * @next: points to the next node.
 */

/* Description: Singly linked list node structure. */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/* Prototypes to used for the project. */

int _putchar(char);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* _LISTS_H_ */
