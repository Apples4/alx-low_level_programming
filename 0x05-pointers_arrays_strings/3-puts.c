#include "main.h"

/**
 * _puts - a function that loops and prints a string
 * @str: Its a input into the function
 * Return: a print of the string
 */
void _puts(char *str)
{
	for (; *str; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
