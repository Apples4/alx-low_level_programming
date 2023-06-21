#include "main.h"

/**
 * print_sign - shows the sign of integer
 * Descrpition: function prints 1 for > 0, 0 == 0
 * and -1 if "
 *
 * @n: input integer as a number for the function
 * Return: 1 if input > 1 and
 * input 0 if 0 == 0 and -1 for other
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
