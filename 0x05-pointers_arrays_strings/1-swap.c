#include "main.h"

/**
 * swap_int - swap two integers values
 * @a: intial integer for function
 * @b: second integer for function
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int j = *a;
	*a = *b;
	*b = j;
}
