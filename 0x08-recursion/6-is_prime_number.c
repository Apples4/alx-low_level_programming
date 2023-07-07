#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - returns a prime number
 * @n: int input
 * Return: a int value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - function to check if prime number
 * @n: int number
 * @i: number of iteration
 * Return: 1 if prime or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
