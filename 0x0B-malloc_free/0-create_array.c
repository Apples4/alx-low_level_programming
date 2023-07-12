#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array using malloc of char
 * @size: int size of array
 * @c: string input
 * Return: a string is returned
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(size * sizeof(char));

	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}

