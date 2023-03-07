#include "main.h"

/**
 * puts_half - a function that prints string
 * @str: a param
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (n = len / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
