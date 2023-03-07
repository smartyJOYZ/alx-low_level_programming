#include "main.h"

/**
 * _strchr - a function that copies memory.
 * @s: a param
 * @c: a param
 * Return: 0 always
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
