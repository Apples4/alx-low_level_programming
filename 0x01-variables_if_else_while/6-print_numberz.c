#include <stdio.h>

/**
 * main - Entry point
 * Description: "using putchar to print bas values"
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
return (0);
}
