#include "lists.h"

/**
 * free_list - function that free a list
 * @head: pointer of a struct
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *pointer;

	pointer = head;
	while (head != NULL)
	{
		pointer = head;
		head = head->next;
		free(pointer->str);
		free(pointer);
	}
	free(head);
}
