#include "main.h"

/**
 * get_bit - function that gets the dec based on the index input
 * @n: input decimal
 * @index: input index number
 * Return: 1 or 0 and -1 if there is a error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	n >>= index;
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
