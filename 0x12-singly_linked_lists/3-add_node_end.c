#include "lists.h"
#include <string.h>
/**
 * _strlen - Returns the lenght of a string
 * @s: char pointer for input
 * Return: string lenght
 */
int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * add_node_end - a function that returns a string length
 * @str: a char pointer
 * @head: pointer of struct type
 * Return: a new noe
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *point_node_1, *point_node_2;

	point_node_1 = malloc(sizeof(list_t));

	if (point_node_1 == NULL)
	{
		return (NULL);
	}
	point_node_1->str = strdup(str);
	point_node_1->len = _strlen(str);
	point_node_1->next = NULL;

	if (!*head)
	{
		*head = point_node_1;
	}
	else
	{
		point_node_2 = *head;
		while (point_node_2->next)
			point_node_2 = point_node_2->next;
		{
			point_node_2->next = point_node_1;
		}
	}
	return (point_node_1);
}
