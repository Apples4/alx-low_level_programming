#include "main.h"

/**
 * _abs - compute a interger always positive
 * @i: input that can bea postive or negative number
 * description: A function that gives the absolute value
 * Return: Always absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

