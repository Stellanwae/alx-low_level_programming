#include "main.h"

/**
 * print_square - print a hash square
 * @size: square side size
 * Return: nothing
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
