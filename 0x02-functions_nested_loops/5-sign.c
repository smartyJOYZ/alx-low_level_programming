#include "main.h"
#include <stdio.h>

/**
 * print_sign - a function that prints the sign of a number
 * @n: is the char to be checked
 * Return: 1 if number is +, 0 if number is 0 and -1 if number -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
