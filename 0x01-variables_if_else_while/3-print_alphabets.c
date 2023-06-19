#include <stdio.h>
/**
 * main - Entry point
 * Description: "Using putchar to print alphabet with different caps."
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 97;
	int n = 65
;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
return (0);
}
