#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: a param
 * @src:a param
 * Return: 0 always
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
