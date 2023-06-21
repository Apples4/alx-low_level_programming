#include "main.h"

/**
 * print_alphabet - Makes and Prints the alphabet
 * Description: "Use function to print alphabet in c"
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
