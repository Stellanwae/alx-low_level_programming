#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * print_dlistint - Prints the list of the d linked list
 * @h: The doubly linked list
 *
 * Return: Number of nodes
 */

 size_t print_dlistint(const dlistint_t *h);
{
  int length = 0;
  
  for (length = 0; h != NULL; lenghth++)
  {
    printf("%d\n", h->n);
    h = h->next;
  }
  return(length);
}
