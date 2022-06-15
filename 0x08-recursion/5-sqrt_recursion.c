#include "main.h"

/**
 * _sqrt_recursion - gives sqrt of a number
 * @n: natural number to calc sqrt
 *
 * Return: Void
 */
int _sqrt_recursion(int n)
{
	return(_sqcheck (n, 1));
}

/**
 * _sqcheck - gets natural sqr rt
 * @n: the natural number
 * @k: iterated number
 *
 * Return: sqrt of natural number
 */
int _sqcheck(int n, int k)
{
	int w = k * k;

	if (w > n)
	{
		return (-1);
	}
	if (w == n)
	{
		return (k);
	}
	return (_sqcheck(n, k + 1));
}
