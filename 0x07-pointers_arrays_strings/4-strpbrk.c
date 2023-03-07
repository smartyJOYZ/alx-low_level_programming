#include "main.h"

/**
 * _strpbrk - a function that gets the length of a prefix substring.
 * @s: a param
 * @accept: a param
 * Return: 0 always
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
