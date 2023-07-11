#include "main.h"

/**
 * _strlen - using a char value as a input
 * @s: Is a input for the char
 * Return: integer will be displayed
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
	{
		a++;
	}
	return (a);
}
