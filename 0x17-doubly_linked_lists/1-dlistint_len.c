#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Count length of list
 * @h - the linked list
 *
 * Return - Number of elements in list
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t;
	for(listlen = 0; h != NULL; listlen++)
	{
		h = h->next;
	}
	return(listlen);
}
