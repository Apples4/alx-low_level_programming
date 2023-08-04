#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: input int number
 * @m: input number
 * Return: a int is returned
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int i;

	for (i = 0; x; x >>= 1)
	{
		if (x & 1)
		{
			i++;
		}
	}
	return (i);
}
