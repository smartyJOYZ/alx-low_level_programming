#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the last digit of a number
 * description : is the char to be checked
 * Return: 0 success
 */
int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1, c, sum;
	int count = 0;

	while (count < 50)
	{
		c = a + b;
		a = b;
		b = c;
		if (a < 4000000 && a % 2 == 0)
		{
			sum += a;
			printf("%lu\n", sum);
		}
		count++;
	}
	return (0);
}
