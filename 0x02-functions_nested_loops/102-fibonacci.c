#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the last digit of a number
 * description : is the char to be checked
 * Return: 0 success
 */
int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int count = 0;

	while (count < 50)
	{
		c = a + b;
		printf("%d\n", c);
		a = b;
		b = c;
	}
	count++;
	return (0);
}
