#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: input binary number
 * @index: input int number
 * Return: 1 if it works and -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if ((sizeof(n) * 8) - 1 < index)
		return (-1);

	i <<= index;
	*n = *n & ~i;

	return (1);
}
