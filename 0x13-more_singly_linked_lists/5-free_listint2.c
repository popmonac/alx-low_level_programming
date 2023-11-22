#include "lists.h"

/**
 * free_listint2 - Function that free a listint_t list
 * @head: The pointer to head of the linked list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
