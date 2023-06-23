#include "main.h"

/**
 * _isupper - checks the if the input is a upper case
 * @c: is a integer input
 * Return: returns a int 1 for upper case an 0 otherwise
 */
int _isupper(int c)
{
	int x;

	if (c >= 65 && c <= 90)
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
return (x);
}
