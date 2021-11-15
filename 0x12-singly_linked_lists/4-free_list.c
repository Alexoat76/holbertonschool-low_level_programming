#include "lists.h"

/*
 * File: 4-free_list.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * free_list - free a "list_t" list.
 * @head: head of linked list.
 */

void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
