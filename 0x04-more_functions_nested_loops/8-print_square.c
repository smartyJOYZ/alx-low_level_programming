#include "main.h"

/**
 * print_square - prints a diagonal line
 * @size: a value
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (size % 2 == 0)
					_putchar('#');
				else
					_putchar('\n');
			}
			_putchar('\n');
		}
	}
}
