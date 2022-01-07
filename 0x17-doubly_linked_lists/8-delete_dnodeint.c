#include "lists.h"

/*
 * File: 8-delete_dnodeint.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the linked list.
 * @index: index at which to delete node.
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *next, *prev;
	unsigned int c;

	if (*head == NULL)
		return (-1);

	for (tmp = *head, c = 0, prev = NULL; tmp && c < index; c++)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (-1);

	next = tmp->next;
	if (prev == NULL)
	{
		free(tmp);
		if (next != NULL)
		{
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
	}
	else if (next == NULL)
	{
		prev->next = NULL;
		free(tmp);
	}
	else
	{
		prev->next = next;
		next->prev = prev;
		free(tmp);
	}

	return (1);
}
