#include "lists.h"

/**
 * list_len - This funtion print the number of elements in a list
 *
 * @i: Gets the list
 *
 * Return: The elements length
 */

size_t list_len(const list_t *i)
{
	int count = 0;
	const list_t *reg = i;

	while (reg != NULL)
	{
		count++;
		reg = reg->next;
	}
	return (count);
}
