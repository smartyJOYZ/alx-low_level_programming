#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that determines if a number is +ve,0 or -ve
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int a = '1';
	int b = '1';

	for (n = 0; n < 9; n++)
	{
		for (a = 1; a <= 9; a++)
		{
		for (b = 1; b <= 9; b++)
		{
			if ((n < a) && (a < b))
			{
				putchar(n + '0');
				putchar(a + '0');
				putchar(b + '0');
				if (!((n == 7) && (b == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
