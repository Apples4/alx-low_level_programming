#include "function_pointers.h"

/**
 * int_index - function that searches for numbers
 * @array: a array input of numbers
 * @size: ths length of the array, int input
 * @cmp: function pointer of the array
 * Return: A int will be returned
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)

	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
