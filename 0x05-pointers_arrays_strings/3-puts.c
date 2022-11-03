#include "main.h"

/**
 * _puts - prints a string
 * @*str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
    int c = 0;
    while (c >= 0)
    {
        if (str[c] == "\0")
        {
            printf("\n");
            break;
        }
        printf("%c", str[c]);
        c++;
    }
}
