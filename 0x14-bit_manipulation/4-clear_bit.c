#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - sets value of bit to 0
 * @n: the number
 * @index: the index
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n & (~(1 << index));
		return (1);
	}
	return (-1);
}
