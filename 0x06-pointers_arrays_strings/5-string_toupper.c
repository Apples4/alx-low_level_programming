#include "main.h"

/**
 * string_toupper - a function that convers lower case to upper case
 *@j: input char
 * Return: will be a char
 */
char *string_toupper(char *j)
{
	int i = 0;

	while (j[i] != '\0')
	{
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] = j[i] - 32;
		}
		i++;
	}
	return (j);
}

