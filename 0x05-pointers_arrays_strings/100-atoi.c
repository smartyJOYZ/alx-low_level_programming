#include "main.h"

/**
 * _atoi- a function that convert a string to an integer.
 * @s: a param
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i = 0, n = 0, signo = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			signo *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	signo *= -1;
	return (n * signo);
}
