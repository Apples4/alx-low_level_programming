#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenats 2 strings
 * @s1: input 1 string to be combined
 * @s2: input2 string to be combined
 * @n: int input for bytes
 * Return: combined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, x = 0, y = 0;
	int a = n;
	char *comb_ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	x = (a >= j) ? j + j + i : i + a;
	comb_ch = malloc(sizeof(char) * (x + 1));
	if (comb_ch == NULL)
		return (NULL);
	while (y < x)
	{
		if (y <= i)
			comb_ch[y] = s1[y];
		if (y >= i && y < x - 1)
			comb_ch[y] = s2[y - i];
		y++;
	}
	comb_ch[y] = '\0';
	return (comb_ch);
}
