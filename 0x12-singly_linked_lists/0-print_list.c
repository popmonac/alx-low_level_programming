#include <stdio.h>
#include "lists.h"

/**
 * print_list - This funtion print from a linked list
 *
 * @i: Gets the linked list
 *
 * Return: the size of the list
 */

size_t print_list(const list_t *i)
{
	const list_t *reg = i;
	size_t count = 0;

	if (i == NULL)
		return (0);
	while (reg != NULL)
	{
		if (reg->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", reg->len, reg->str);
		count++;
		reg = reg->next;

	}
	return (count);
}
