#include "main.h"

/**
 * _isupper - checks the uppercase
 * 
 * @c: character reference ASCII
 *
 * Return: 0 lowercase c 1 uppercase c
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
