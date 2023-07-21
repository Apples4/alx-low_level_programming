#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers in a line
 * @separator: char input pointer
 * @n: number of numbers, int input
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;

	va_list args;

	if (n > 0)
	{
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
	}
}



