#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char s;
	int i = 0;
	
	while (i <= 9)	
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');

		i++;
	}
}

