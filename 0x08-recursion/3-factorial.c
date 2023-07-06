#include "main.h"

/**
 * factorial - using recusion to make fectorial
 * @n: input integer
 * Return: output int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
