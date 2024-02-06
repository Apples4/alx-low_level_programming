#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array
 * @value: the value to search for
 * @size: the number of elements in array
 * Return: index of arrat or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 0, mid = 0;

	if (array == NULL)
		return (-1);

	high = size - 1;
	while(low <= high)	
	{
		printf("Searching in array: \n");
		for (mid = low; mid < high; mid++)
		{
			printf("%d, ",array[mid]);
		}
		printf("%d\n", array[mid]);

		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
