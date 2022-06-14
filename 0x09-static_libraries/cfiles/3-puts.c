#include "main.h"

/**
 * _puts - prints a string
 * @*str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int k = 0;

	while (*(str + k))
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
