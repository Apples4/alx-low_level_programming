#include "main.h"

/**
 * _islower - Will show 1 if lower case and
 * shows 0 for other cases
 * @c: The character in ASCII code
 * Description: Function to check lower case characters
 * int c is integer
 * Return: 1 for lower case character. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
