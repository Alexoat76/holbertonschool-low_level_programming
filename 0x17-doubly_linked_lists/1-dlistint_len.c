#include "lists.h"

/*
 * File: 1-dlistint_len.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * dlistint_len - Counts the number of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 * Return: The number of elements in the dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;

	}

	return (nodes);
}

/***
 * Other solution
 * size_t print_dlistint(const dlistint_t *h)
 * {
 *   size_t nodes;
 *
 *	 for (nodes = 0; h != NULL; nodes++)
 *          h = h->next;
 *
 *   return (nodes);
 * }
 */
