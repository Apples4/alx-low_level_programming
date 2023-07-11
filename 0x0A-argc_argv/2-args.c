#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints arguments then next line
 * @argc: input int
 * @argv: input strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
