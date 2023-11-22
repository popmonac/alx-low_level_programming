#include "lists.h"

/**
 * *add_nodeint_end - This adds a new node at the end of a listint_t list
 * @head: double pointer to the listint_t list
 * @k: the new node to be added
 *
 * Return: address of k
 */
listint_t *add_nodeint_end(listint_t **head, const int k)
{
	listint_t *add;
	listint_t *temp = *head;

	add = malloc(sizeof(listint_t));

	if (!add)
		return (NULL);

	add->k = k;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = add;

	return (add);
}