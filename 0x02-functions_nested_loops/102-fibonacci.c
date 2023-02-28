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
	unsigned long b = 1, 
	int count = 0;

	while (count < 50)
	{
		if (count == 49)
			printf("%lu\n", c);
		else
		{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
		}
	}
	count++;
	return (0);
}
