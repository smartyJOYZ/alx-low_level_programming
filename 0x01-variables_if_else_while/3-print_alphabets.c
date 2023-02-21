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
	char alpha = 'a';
	char str = 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (str = 'A'; str <= 'Z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
