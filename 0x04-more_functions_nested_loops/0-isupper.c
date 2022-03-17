#include "main.h"

/**
 * _isupper - checks the uppercase and lowercase characters
 * 
 * @c: character reference ASCII
 *
 * Return: 0 lowercase 1 uppercase 
 */
int _isupper(int c)
{
	if ( c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
