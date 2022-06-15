#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - number of bits in 2 numbers
 * @n: first no
 * @m: second no
 *
 * Return: bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, count;
	count = 0;
	flip = n ^ m;

