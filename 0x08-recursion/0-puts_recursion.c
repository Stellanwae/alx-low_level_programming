#include "main.h"

/**
 * _puts_recursion - for printing a string
 * @s: the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
