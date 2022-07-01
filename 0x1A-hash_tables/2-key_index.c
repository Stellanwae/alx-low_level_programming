#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - index of key in hash table
 * @key: the key
 * @size: size of hash table
 *
 * Return: Index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return(hash_djb2(key) % size);
}
