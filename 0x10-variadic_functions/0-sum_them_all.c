#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that will add the input values
 * @n: a int input
 * Return: an int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	i = 0;

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
