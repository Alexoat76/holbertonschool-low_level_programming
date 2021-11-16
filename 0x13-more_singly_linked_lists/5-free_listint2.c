#include "lists.h"

/*
 * File: 5-free_listint2.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * Description: Sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
return;
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmp;
}
head = NULL;
}
