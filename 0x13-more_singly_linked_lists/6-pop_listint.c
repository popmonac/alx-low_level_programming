#include "lists.h"

/**
 * pop_listint - Function that delete the head of a lionked list
 * @head: Fetches the struct
 *
 * Return: The value that head is points to.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}