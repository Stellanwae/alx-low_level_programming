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
    int m, o;

    for (m = 0; m <= n; m++)
    {
        for (o = 0; o <= n; o++)
        {
            if (o < n)
            {
                printf("%d, ", m*o);
            }
            else if ( o == n)
            {
                printf("%d",m*o);
            }

        }
        printf("\n");
    }
}
