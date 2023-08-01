#include "lists.h"

/**
 * free_listint2 -  function to free a list
 * @head: pointer, pointing to the initial element in the list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
