#include "lists.h"

/*
 * File: 0-print_listint.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *head)
{
size_t nodes = 0;
while (head)
{
nodes++;
printf("%d\n", head->n);
head = head->next;
}
return (nodes);
}
