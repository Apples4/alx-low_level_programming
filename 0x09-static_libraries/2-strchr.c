#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: a string array
 * @c: character being looked for
 * Return: a string or null,
 */


char *_strchr(char *s, char c)
{
	char *j = s;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	j = "NULL";
	return (j);
}
