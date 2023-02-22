#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the value of an integer
 * @n : is the char to be checked
 * Return: 0 success
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
