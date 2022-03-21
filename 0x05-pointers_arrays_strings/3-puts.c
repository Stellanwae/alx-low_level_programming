#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	_puts("%d\n", _strcmp(s1, s2));
	_puts("%d\n", _strcmp(s2, s1));
	_puts("%d\n", _strcmp(s1, s1));
	return (0);
}
