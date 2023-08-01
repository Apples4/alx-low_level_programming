#include "lists.h"

/**
 * free_listint - function to free nodes in a list
 * @head: pointer contain the addresss of first element on the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	return;
}
