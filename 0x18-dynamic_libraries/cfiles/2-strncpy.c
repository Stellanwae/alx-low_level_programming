#include "main.h"

/**
 * _strncpy - copies in src
 * @dest: to copy
 * @src: to be copied
 * @n: largest number
 *
 * Return: address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;
	k= 0;
	while (k < n && *(src + k))
	{
		*(dest + k) = *(src + k);
		k++;
	}
	while (k < n)
	{
		*(dest + k) = '\0';
		k++;
	}
	return (dest);

}
