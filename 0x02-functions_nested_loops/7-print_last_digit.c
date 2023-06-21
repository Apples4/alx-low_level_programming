#include "main.h"

/**
 * print_last_digit - Print last digit of a number,
 * return type integer
 * Description: Making a function to get the remainder,
 * @i: input number as a integer
 * Return: Always last digit
 */
int print_last_digit(int i)
{
	int x;

	x = i % 10;
	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
