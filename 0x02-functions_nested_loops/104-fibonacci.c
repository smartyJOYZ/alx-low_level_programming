#include <stdio.h>

/**
 * main - a function that prints the last digit of a number
 * purpose - no hardcore
 * Return: 0 success
 */
int main(void)
{  
	unsigned long int a = 1, b = 2, c;
	unsigned long int a1, a2, b1, b2, l = 1000000000;
	int i, count = 0;

	printf("%lu", a);
	for (i = 1; i < 91; i++)
	{
		printf(" ,%lu", b);
		a += b;
		b = a - b;
	}
	b1 = (b / l);
	b2 = (b % l);
	a1 = (a / l);
	a2 = (a % l);
	for (i = 92; i < 99; i++)
	{
		printf(", %lu", a1 + (a2 / l));
		printf("%lu", a2 % l);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}
