#include "hash_tables.h"

/*
 * File: 2-key_index.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * key_index - Gives the index of a key
 * @key: key of key/value pair
 * @size: size of array of the hash table
 * Return: index where key/value pair should be stored in array of hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
