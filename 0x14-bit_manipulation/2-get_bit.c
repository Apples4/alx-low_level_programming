#include "main.h"

/**
 * get_bit- Write a function that returns the value of a bit at a given index
 * @n: input of binary number
 * @index: input number
 * Return: int 1 or 0 and -1 for error
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
