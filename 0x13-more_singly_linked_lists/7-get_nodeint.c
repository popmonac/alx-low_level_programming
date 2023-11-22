#include "lists.h"

/**
 * get_nodeint_at_index - Function that the nth position of a linked list
 * @head: The NULL linked list
 * @position: position of the node
 * Return: the node or null if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int position)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < position)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
	return (save);
}
