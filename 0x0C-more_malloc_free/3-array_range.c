#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that makes an int array
 * @min: initial int input
 * @max: second int input
 * Return: an int array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *x;

	if (min < max)
		return (NULL);
	x = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[i] = min;
		i++;
		min++;
	}
	return (x);
}
