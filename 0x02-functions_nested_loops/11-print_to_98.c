#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers
 *@n : is the char to be checked
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
		if (i <= 9)
		{
			printf("%d, ", i);
		}
		else if (i < 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
	}
	else
	{
	for (j = n; j >= 98; j--)
	{
		if (j != 98)
		{
			printf("%d, ", j);
		}
		else
		{
			printf("%d\n", j);
		}
	}
	}
}
