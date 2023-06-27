#include "main.h"

/**
 * print_rev - function print a string in revers
 * @s: The input of the function
 * Return: Always 0
 */
void print_rev(char *s)
{
	int c;
	int x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	s--;
	for (c = x ; c >= 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
