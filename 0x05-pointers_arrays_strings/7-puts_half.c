#include "main.h"

/**
 * puts_half - a function to print half the elements in a string
 * @str: a char input
 * Return: Always 0
 */
void puts_half(char *str)
{
	int x = 0;
	int y;
	int i;

	for (y = 0; str[y] != '\0'; y++)
	{
		x++;
	}
	i = x / 2;
	if (i % 2 == 1)
	{
		i = ((x + 1) / 2);
	}
	for (y = i; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
