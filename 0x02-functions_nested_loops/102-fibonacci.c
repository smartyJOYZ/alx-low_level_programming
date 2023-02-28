#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the last digit of a number
 * description : is the char to be checked
 * Return: 0 success
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int count = 0;

	while (count < 50)
	{
		c = a + b;
		printf("%d + %d = %d\n", a, b, c);
	}
	a = b;
	b = c;
	count++;
	return (0);
}
