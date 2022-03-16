#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: Make reference to the ASCII
 *
 * Return: returns 1 and prints 0 if n is greater than 0, return 0 when 0 and prints 0 and returns -1 prints - n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
