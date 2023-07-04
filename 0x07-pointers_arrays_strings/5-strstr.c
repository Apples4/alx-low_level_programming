#include "main.h"

/**
 *_strstr - A function the prints out a antire matching string
 *@haystack: a input array
 *@needle: a second input array
 *Return: A matching string returns
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *x = "NULL";

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			x = &haystack[i];
			return (x);
		}
		i++;
	}
	return (x);
}
