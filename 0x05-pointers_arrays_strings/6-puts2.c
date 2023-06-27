#include "main.h"

/**
 * puts2 - a funcion that prints values that are divisible by 2
 * @str: is a string input
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;
	int x = 0;
	int j;
	char *y = str;

	while (*y != '\0')
	{
	i++;
	y++;
	}
	x = i - 1;
	for (j = 0; j <= x; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
_putchar('\n');
}
