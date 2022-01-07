#include "lists.h"

/*
 * File: 7-insert_dnodeint.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                          list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 * Return: Address of new node, or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);

	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;

	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;

	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);

}
