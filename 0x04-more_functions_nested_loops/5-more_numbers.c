#include "main.h"

/**
 * more_numbers - a function that prints number 1 to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)

			_putchar('1');
			_putchar('0' + j % 10);

		}
	_putchar('\n');
	}
}

