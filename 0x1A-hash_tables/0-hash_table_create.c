#include "hash_tables.h"

/*
 * File: 0-hash_table_create.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * hash_table_create - Create a hash table
 * @size: size of the array
 * Return: new hash table or NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);

	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);

}
