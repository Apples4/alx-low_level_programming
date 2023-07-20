#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that iterates the array
 * @array: input array of number
 * @size: of the array
 * @action: function pointer in the function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size != 0 && array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
