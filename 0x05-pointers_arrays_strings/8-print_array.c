#include <stdio.h>
#include "main.h"

/**
 * print_array - print the elements in a array
 * @a: is the pointer of the array
 * @n: number of emelents in the array
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(", ");
		if (i == (n - 1))
		{
		printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}

