#include "main.h"

/**
 * clear_bit - function that sets the value of bit to 0
 * @n: input binary number
 * @index: input int decimal
 * Return: 1 or -1 if its an error
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
