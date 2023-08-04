#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: input char pointer for binary value
 * Return: an int or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0, dec = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		len++;
	}
	len -= 1;

	while (b[i] != 0)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			dec += (1 * (1 << len));
		len--;
		i++;
	}
	return (dec);
}
