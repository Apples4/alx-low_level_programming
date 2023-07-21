#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints string
 * @separator: a char input
 * @n: a int input for the number of string
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;


	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(args, char *);

			if (x == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", x);
			}

			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		va_end(args);
		printf("\n");
	}
}

