#include "main.h"

/**
 * puts2 - prints first string character then new line
 * @str: string character
 *
 * Return: Void
 */
void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
	       	if (count % 2 == 0)
		 {
			 _putchar(*str);
			 str++;
			 count++;
		 }
		 else
		 {
			 str++;
			 count++;
		 }
	}
	_putchar('\n');
}
