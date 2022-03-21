#include "main.h"

/*
 * swap_int - swaps values of two integers
 *
 * @a: An int to swap
 * @b: A second int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

