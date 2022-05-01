#include <stdio.h>
#include "main.h"

/**
* print_times_table - prints the time table of number
*
* @n - number to print the times table
*
* Return: Nothing
*/

void print_times_table(int n)
{
    int m, o, p;
    for (m = '0'; m <= n; m++)
    {
        for (o = '0'; o <= n; o++)
        {
            p = m*o;
            if (o < n)
            {
                _putchar(p);
                _putchar(',');
                _putchar(' ');
            }
            else if (o == n)
            {
                _putchar(p);
            }
        }
        _putchar('\n');
    }
    return 0;
}
