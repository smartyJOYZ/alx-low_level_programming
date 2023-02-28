#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the last digit of a number
 * description : is the char to be checked
 * Return: 0 success
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n += i;
			return (0);
		}
		_putchar('\n');
	}
}
