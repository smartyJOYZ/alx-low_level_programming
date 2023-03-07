#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a param
 * @b: a param
 * @n: a param
 * Return: 0 always
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
