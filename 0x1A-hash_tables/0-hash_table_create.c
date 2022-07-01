#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: Size of array
 *
 * Return: Pointer of the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned
