#include "main.h"

/**
 * print_triangle - function that prints triangles using loops
 * @size: input intger
 * Return: prints a triangle with # shape
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (x = 1; x <= i; x++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}

