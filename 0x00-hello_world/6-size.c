#include <stdio.h>

/**
 * main - A program that prints the size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %i bytes(s)\n", sizeof(char));
	printf("Size of an int: %i bytes(s)\n", sizeof(int));
	printf("Size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n", sizeof(float));
return (0);
}


