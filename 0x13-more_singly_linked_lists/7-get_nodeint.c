#include "lists.h"

/**
 * get_nodeint_at_index - Function that the nth position of a linked list
 * @head: The NULL linked list
 * @position: The position to be worked on
 *
 * Return: The node at that the position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int position)
{
	listint_t *save;
	unsigned int i;

	if (head == NULL)
		return (0);

	save = head;

	for (i = 0; i < position && save != NULL; i++)
	{
		save = save->next;
	}
	return (save);
}
