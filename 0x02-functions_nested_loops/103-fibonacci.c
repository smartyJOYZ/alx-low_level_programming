#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the last digit of a number
 * description : is the char to be checked
 * Return: 0 success
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2, c, sum;
	int count = 0;

	while (count <= 33)
	{
		if (a < 4000000 && a % 2 == 0)
		{
			sum += a;
		}
		c = a + b;
		a = b;
		b = c;
		count++;
	}
	printf("%lu\n", sum);
	return (0);
}
