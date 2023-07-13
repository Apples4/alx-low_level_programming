#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that makes an array
 * @nmemb: input int 1
 * @size: input int 2
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	j = nmemb * size;
	x = malloc(j);

	if (x == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		x[i] = 0;
		i++;
	}
	return (x);
}
