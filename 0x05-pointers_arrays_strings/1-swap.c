#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: point to an int
 * @b: points to b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
