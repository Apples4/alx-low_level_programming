#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @dest: Output that returns a memoey area
 * @src: a string input
 * @n: integer input representing bytes
 * Return: String output
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

