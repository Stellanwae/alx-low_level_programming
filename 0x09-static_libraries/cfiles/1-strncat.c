#include "main.h"

/**
 * _strncat - puts str ...
 * @dest: to append with src
 * @src : the string
 * @n: largest number
 * 
 * Return: Nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, l;
	k = l = 0;
	while (*(dest + k))
		k++;
	while (l < n && *(src + l))
	{
		*(dest + k) = *(src + l);
		k++;
		l++;
	}
	if (l < n)
		*(dest + k) = *(src + l);
	return (dest);
}
