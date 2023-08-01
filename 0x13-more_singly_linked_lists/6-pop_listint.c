#include "lists.h"

/**
 * pop_listint - function that deletes the head node and returns and returns the element
 * @head: input pointer of list
 * Return: int of pointer data
 */
int pop_listint(listint_t **head)
{
	listint_t *node_1;
	
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		return ((*head)->n);
		node_1 = *head;
		free (node_1);
	}
}

