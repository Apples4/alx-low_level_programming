#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: an input
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int len = 0;
	unsigned long int i, j = 1;

	while (i > 0)
	{
		len++;
		i >>= 1;
	}

	len -= 1;

	if (len > 0)
		j = j << len;

	while (j > 0)
	{
		if (n & j)
			_putchar('1');
		else
			_putchar('0');
		j >>= 1;
	}
}

