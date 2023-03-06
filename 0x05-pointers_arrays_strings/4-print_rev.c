#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string reverse
 * @s: a param
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	i = n - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
