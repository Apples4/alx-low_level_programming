#include "main.h"

/**
 * _strpbrk - function that searches a string for matching set of bytes
 * @s: input string
 * @accept: input string to compare
 * Return: a string will be returned
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *x = "NULL";

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				x = &s[i];
				return (x);
			}
			j++;
		}
		i++;
	}
	return (x);
}

