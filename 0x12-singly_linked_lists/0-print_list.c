#include "lists.h"

/*
 * File: 0-print_list.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * print_list - prints all the elements
 *              of a "list_t" list.
 * @h: pointer to the start of the list.
 * Return: number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i;
tmp = h;
for (i = 0; tmp != NULL; i++)
{
printf("[%u] %s\n", tmp->len, tmp->str);
tmp = tmp->next;
}
return (i);
}
