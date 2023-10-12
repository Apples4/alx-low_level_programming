#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletese
 * @head: pointer of the list
 * @index: position of node to be deleted
 * Return: 1 for success and -1 for fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	/* looping till end of list or till position index */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	/* for invalid index */
	if (temp == NULL)
		return (-1);

	if (temp != *head)
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL) /* if temp is not the last node */
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
