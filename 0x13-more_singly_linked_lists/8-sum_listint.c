#include "lists.h"

/**
 * sum_listint - Function that calculate the sum of integer of the element
 * @head: The struct to be dealt with
 *
 * Return: The sum
 */


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
