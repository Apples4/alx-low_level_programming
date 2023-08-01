#include "lists.h"

/**
 * listint_t - function that adds a new node at the beginning of a list
 * @head: input pointer of the list
 * @n: input int for node
 * Return: Nothing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	
	newnode = malloc(sizeof(listint_t));
	
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}


