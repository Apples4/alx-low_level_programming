#include "main.h"

/**
 * times_table - multplication tables using loops
 *
 * Return: no return
 */
void times_table(void)
{
	int i, j, x, y, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
			if (x > 9)
			{
				y = x % 10;
				z = (x - y) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(z + '0');
				_putchar(y + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(x + '0');
			}
		}
	_putchar('\n');
	}
}


