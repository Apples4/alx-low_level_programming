#include <stdio.h>

/**
 * main - Entry point
 * Description: "Putchar reverse alphabet using loop "
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
return (0);
}
