#include "main.h"
#include <string.h>

/**
 * puts2 - a function that prints string
 * @str: a param
 * Return: Always 0.
 */

void puts2(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
