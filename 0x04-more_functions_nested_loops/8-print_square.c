#include "main.h"

/**
 * print_square - function displays squares based on input n
 * @size: is the input int
 * Return: Prints squares based on integer
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

