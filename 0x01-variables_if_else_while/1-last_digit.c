#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry Point
* description: 'get the last digit of the number.'
* Return: Always 0 (Success)
*
*/
int main(void)
{
	int n;
	int rm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rm = n % 10;
	if (rm > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rm);
	}
	else if (rm == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rm);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rm);
	}
	return (0);
}
