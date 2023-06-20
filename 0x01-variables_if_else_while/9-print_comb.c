#include <stdio.h>

/**
 * main - Entry point
 * Description: "Printing number sequencialy and printing a space"
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);

		if (i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
return (0);
}
