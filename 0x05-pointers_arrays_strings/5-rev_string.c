#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses string
 * @s: a param
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char tmp;
	int  m, n;

	m = 0;
	n = 0;
	while (*(s + m) != '\0')
		m++;
	m = m - 1;
	while (n <= m)
	{
		tmp = s[m];
		s[m] = s[n];
		s[n] = tmp;
		n++;
		m--;
	}
}
