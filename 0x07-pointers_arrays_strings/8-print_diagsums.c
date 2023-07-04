#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: input array
 * @size: size of the array
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int x = 0, i = 0, y = 0;

	for (; i < size ; i++)
	{
		x += a[i * size + i];
	}
	i = 0;
	for (; i < size ; i++)
	{
		y += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", x, y);
}

