#include "lists.h"
#include <string.h>

/**
 * _strlen - function to get string length
 * @s: character pointer
 * Return: a int
 */
int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer of struct node of data type
 * @str: struct for data type
 * Return: element of string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *point_node;

	point_node = malloc(sizeof(list_t));

	if (point_node == NULL)
	{
		return (NULL);
	}
	point_node->str = strdup(str);
	point_node->len = _strlen(str);
	point_node->next = *head;
	*head = point_node;

	return (point_node);
}
