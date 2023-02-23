#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - a function that prints the last digit of a number
 * description : is the char to be checked
 * Return: 0 success
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
	for (j = 0; j < 60; j++)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar('\n');
	}
	}
}
