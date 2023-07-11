#include "main.h"

/**
 * *_strcpy - a function that copies a string pointer at a variable
 * @dest: variable
 * @src: char variable
 * Return: A char value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(src + i) != '\0')
	{
		i++; /*determin string length*/
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
