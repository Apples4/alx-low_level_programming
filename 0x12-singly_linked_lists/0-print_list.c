#include "lists.h"

/**
 * print_list - function to print all elements of a list
 * @h: input of struct pointer
 * Return: elements of a string
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *point;

	i = 0;
	point = h;

	while (point)
	{
		if (point->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			point = point->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", point->len, point->str);
			point = point->next;
			i++;
		}
	}
	return (i);
}
