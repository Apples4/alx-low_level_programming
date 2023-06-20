#include <stdio.h>

/**
 * main - Entry point
 * Description: Using putchar to show base 16 and loops"
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 48;
	int x = 65;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (x <= 70)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
return (0);
}
