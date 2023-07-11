#include "main.h"

/**
 * _isdigit - function checks for char using
 * @c: is a char input
 * Return: a int output 1 or 0 as
 */
int _isdigit(int c)
{
	int x;

	if (c >= 48 && c <= 57)
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
