#include "main.h"

/**
 * set_bit - Write a function that sets the value of a bit to 1
 * @n: the decimal number
 * @index: input number
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if ((sizeof(n) * 8) - 1 < index)
		return (-1);

	i <<= index;
	*n = *n & ~i;

	return (1);
}
