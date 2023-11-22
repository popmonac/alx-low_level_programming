#include "lists.h"

/**
 * print_listint - This Function prints the element of a linked list
 * @k: A NULL pointer
 *
 * Return: the lenght of the string
 */

size_t print_listint(const listint_t *k)
{
	size_t count = 0;
	const listint_t *node;

	if (k == NULL)
		return (0);
	node = k;
	while (node != NULL)
	{
		count++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (count);
}
