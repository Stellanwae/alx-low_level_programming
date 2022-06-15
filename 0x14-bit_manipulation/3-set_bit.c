#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - puts the value of bit to 1
 * @n: the number
 * @index: index for modification
 *
 * Return: 1 if ok, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
