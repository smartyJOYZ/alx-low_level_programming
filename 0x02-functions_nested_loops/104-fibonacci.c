#include <stdio.h>

/**
 * main - a function that prints the last digit of a number
 * purpose - no hardcore
 * Return: 0 success
 */
int main(void)
{
	unsigned long a = 0, b = 1, c;
	unsigned long a1, a2, b1, b2, d1, d2, l = 10000000000;
	int i;

	for (i = 0; i < 92; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
	}
	b1 = (b / l);
	b2 = (b % l);
	a1 = (a / l);
	a2 = (a % l);
	for (i = 93; i < 99; i++)
	{
		d1 = a1 + b1;
		d2 = a2 + b2;
		if (d2 >= l)
		{
			d1 += 1;
			d2 %= l;
		}
		printf("%lu%lu", d1, d2);
		if (i != 98)
		{
			printf(",");
		}
		a1 = b1;
		a2 = b2;
		b1 = d1;
		b2 = d2;
	}
	printf("\n");
	return (0);
}
