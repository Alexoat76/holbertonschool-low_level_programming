#include "lists.h"

/*
 * File: 1-listint_len.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * listint_len - prints all the elements
 *              of a "listint_t" list.
 * @head: pointer to the start of the list.
 * Return: The number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *head)
{
size_t nodes = 0;
while (head)
{
nodes++;
head = head->next;
}
return (nodes);
}
