#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that determines if a number is +ve,0 or -ve
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	for (n = 0 ; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
