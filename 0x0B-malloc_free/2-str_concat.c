#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings in a new allocated space
 * @s1: input string 1
 * @s2: input string 2
 * Return: Pointer to allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *x_cat;
	unsigned int i = 0, j = 0, z = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	z = i + j + 1;
	x_cat = malloc(z * sizeof(char));
	if (x_cat == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s1[i])
	{
		x_cat[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		x_cat[i] = s2[j];
		i++;
		j++;
	}
	x_cat[i] = '\0';
	return (x_cat);
}
