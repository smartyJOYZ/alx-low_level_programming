#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n : is the char to be checked
 * Return: 0 success
 */
int print_last_digit(int n)
{
	int last_d;

	if (n < 0)
	{
		n *= -1;
	}
	last_d = n % 10;

	if (last_d < 0)
	{
		last_d *= -1 ;
	}
	_putchar(last_d + '0');
	return (last_d);
}
