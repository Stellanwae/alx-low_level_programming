#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
    int i = 0;

    for (i = strlen(s); i >= 0; i--)
    {
        putchar(s[i]);
    }
}
