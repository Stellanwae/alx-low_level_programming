#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: the integer
 *
 * Return: void
 */
int factorial(int n)
{
	if (n < '0')
		return (-1);
	n --;
	return (n * factorial(n - 1));
}		
