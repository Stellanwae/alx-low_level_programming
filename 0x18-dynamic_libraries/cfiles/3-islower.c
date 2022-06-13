#include "main.h"

/**
 * _islower - Checks lowercase characters
 * @c: Character is checked here ASCII code considered
 *
 * Return: 1 for lowercase or 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
