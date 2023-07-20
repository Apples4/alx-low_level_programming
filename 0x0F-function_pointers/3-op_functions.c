#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds ints
 * @a: input int
 * @b: input int
 * Return: a int is returned
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts ints
 * @a: input int
 * @b: input int
 * Return: a int is returned
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that makes multiplication
 * @a: input int
 * @b: input int
 * Return: int is returned
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that makes division
 * @a: input int
 * @b: input int
 * Return: int is returned
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that does modular division
 * @a: input int
 * @b: input int
 * Return: int is returned
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
