#include "main.h"

/**
 * _isalpha - checks for alphabetic chactater prints 1 or 0
 * @c: The character in ASCII code
 * int is the return type
 * Return: 1 for alphabet and 0 for other
 */
int _isalpha(int c)
{
		if ((c >= 68 && c <= 90) ||  (c >= 97 && c <= 122))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		_putchar('\n');
}
