#include "lists.h"

/**
 * free_listint - Function that frees the memory
 * @head: pointer to the linked list
 *
 * Returns: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}