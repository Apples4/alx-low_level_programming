#include "main.h"

/**
 * _strncat- A function that concatinaes 2 srings based on bytes
 * @dest: first char pointer
 * @src: second char pointer
 * @n: a integer input to represent the byte
 * Return: a char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *y = dest;
	char *z = src;

		while (y[i] != '\0')
		{
			i++;
		}
		while (z[j] != '\0' && j < n)
		{
			y[i] = z[j];
			i++;
			j++;
		}
	return (y);
}
