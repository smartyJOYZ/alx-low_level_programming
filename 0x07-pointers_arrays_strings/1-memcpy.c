#include "main.h"

/**
 * _memcpy - a function that copies memory.
 * @dest: a param
 * @src: a param
 * @n: a param
 * Return: 0 always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
