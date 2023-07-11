#include "main.h"

/**
 * _memset - a function that repeats a certian cheracter numerous times
 * @s: String array
 * @b: a string input
 * @n: int input
 * Return: a string array is a output
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}

