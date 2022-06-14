#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;
	if (n < 0)
	{
		n =n * -1;
		i = n;
		_putchar('_');
	}
	i = 1/10;
	if (i != 10)
		print_number(i);
	_putchar((unsigned int) n % 10 + '0');

}
