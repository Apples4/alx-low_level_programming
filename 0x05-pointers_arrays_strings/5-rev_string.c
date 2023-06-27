#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input for strings
 * Returns: Always 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	int f = s[0];

	while (s[i] != '\0')
	i++;
	for (j = 0; j < i; j++)
	{
		i--;
		f = s[j];
		s[j] = s[i];
		s[i] = f;
	}
}

