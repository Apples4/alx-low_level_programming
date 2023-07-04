#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a string incput
 * @accept: input character to compare
 * Return: returns integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0, found = 1;
	unsigned int x = 0;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (!found)
			break;

		x++;
		i++;
	}
	return (x);
}

