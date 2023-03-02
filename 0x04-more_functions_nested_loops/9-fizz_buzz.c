#include "main.h"

/**
 * main - prints numbers from 1 to 100
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < 100; i++)
		{
			if (i == 100)
				_putchar('buzz');
			else if (i % 3 == 0)
			{
				_putchar('Fizz');
				_putchar(' ');
			}
			else if (i % 5 == 0)
			{
				_putchar('Buzz');
				_putchar(' ');
			}
			else if (i % 3 == 0 && i % 5 == 0)
			{
				_putchar('FizzBuzz');
				_putchar(' ');
			}
			else if (i < 10)
			{
				_putchar(i + '0');
				_putchar(' ');
			}
			else if (i > 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(' ');
			}
		}
	}
}
