#include <stdio.h>
#include<stdlib.h>

/**
 * main - program that multiplies arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		x = strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10);
		printf("%d\n", x);
	}
	return (0);
}
