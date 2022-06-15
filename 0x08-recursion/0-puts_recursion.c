#include "main.h"

/**
 * _puts_recursion - for printing a string
 * @s: the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		return (_puts_recursion(s + 1));
	}
}
