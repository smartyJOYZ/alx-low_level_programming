#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: point to a char
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
