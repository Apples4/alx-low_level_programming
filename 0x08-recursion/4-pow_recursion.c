#include "main.h"

/**
 * _pow_recursion - function returning a int to the power of another int
 * @x: input int
 * @y: second input int
 * Return: the int value to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
