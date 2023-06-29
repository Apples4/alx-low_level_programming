#include "main.h"

/**
 * reverse_array - a function that reverse the order of the content
 * @a: input variable
 * @n: number of elements in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{

	int i = 0, x = 0;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;
	}
}
