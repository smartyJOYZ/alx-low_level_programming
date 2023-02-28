#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints the last digit of a number
 * description : is the char to be checked
 * Return: 0 success
 */
int main(void)
{
	unsigned long a = 1, b = 2, c;
	unsigned long a1, a2, b1, b2, l = 1000000000;
	int i, count = 0;

	printf("%lu", a);
	for (i = 1; i < 91; i++)
	{
		printf(" ,%lu", b);
		a += b;
		b = a - b;
	}
	b1 = (b / 1);
	b2 = (b % 1);
	a1 = (a / 1);
	a2 = (a % 1);
	for (i = 92; i < 99; i++)
	{
		printf(", %lu", a1 + (a2 / l));
		printf("%lu", a2 % 1);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}
