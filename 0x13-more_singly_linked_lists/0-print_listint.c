#include "lists.h"

/*
 * File: 0-print_listint.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * print_listint - prints all the elements
 *              of a "listint_t" list.
 * @head: pointer to the start of the list.
 * Return: number of nodes in the list.
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
