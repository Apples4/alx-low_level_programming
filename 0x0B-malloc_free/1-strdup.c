#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to copy given string
 * @str: given string.
 * Return: Pointer to allocated memory.
 */
char *_strdup(char *str)
{
	char *aray;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	aray = malloc((i + 1) * sizeof(char));
	}

	if (aray == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= i; j++)
	{
		aray[j] = str[j];
	}

	return (aray);
}
