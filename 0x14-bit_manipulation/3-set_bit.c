#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: input long number
 * @index: input int
 * Return: a number after adding a bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if ((sizeof(n) * 8) - 1 < index)
		return (-1);

	i <<= index;
	*n = *n | i;

	return (1);
}

