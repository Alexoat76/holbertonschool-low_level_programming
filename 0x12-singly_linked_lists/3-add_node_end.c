#include "lists.h"

/*
 * File: 3-add_node_end.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * add_node_end - add a new node at the end of
 *                "list_t" list.
 * @head: double pointer to head.
 * @str: string to duplicate into new node.
 * Return: Address of the new element or
 *         NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
char *duplicate;
int len;
list_t *new, *last;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
duplicate = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = duplicate;
new->len = len;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
