#include "main.h"

/**
 * _strncpy - a function that copies one array for another
 * @dest: a initial char array
 * @src: a second char array
 * @n: a initial int input
 * Return: a char output
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	char *x = dest;
	char *y = src;

	while (y[i] != '\0')
	{
		i++;
	}
	while (j < n && y[j] != '\0')
	{
		x[j] = y[j];
		j++;
	}
	while (j < n)
	{
		x[j] = '\0';
		j++;
	}
	return (x);
}
