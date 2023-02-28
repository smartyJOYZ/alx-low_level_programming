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
		if (c <= 4000000 && c % 2 == 0)
		{
			sum += c;
			printf("%lu\n", c);
		}
		count++;
	}
	return (0);
}
