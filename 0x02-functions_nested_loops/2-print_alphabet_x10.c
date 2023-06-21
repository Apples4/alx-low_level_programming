#include "main.h"

/**
 * print_alphabet_x10 - Makes and Prints the alphabet xtimes
 * Description: "Print alphabet 10 times"
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int k = 97;

	while (i <= 9)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
		i++;
	}
}
