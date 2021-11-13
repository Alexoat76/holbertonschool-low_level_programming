#include "lists.h"

/*
 * File: 2-add_node.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * add_node - Adds a new node at the beginning
 *            of a "list_t" list.
 * @head: double pointer to head.
 * @str: string to be saved in new node, must be duplicated.
 * Return: Address of new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
char *duplicate;
int len;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
duplicate = strdup(str);
if (duplicate == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = duplicate;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
