#include "main.h"

/**
 * _strcat - adds to dest
 * @dest: to append with src
 * @src: string with dest
 *
 * Return: the dest
 */
char *_strcat(char *dest, char *src)
{
	int k, l;
	k = l = 0;
	while (*(dest + k))
		k++;
	while ((*(dest + k) = *(src + l)))
	{
		k++;
		l++;
	}
	return (dest);
}
