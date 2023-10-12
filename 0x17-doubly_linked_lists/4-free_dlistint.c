#include "lists.h"

/**
 * free_dlistint -  function that frees a dlistint_t list.
 * @head: pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
