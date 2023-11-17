#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This funtion create a node at the end of the list
 *
 * @head: Gets the head pointer
 * @str: Gets the string
 *
 * Return: The list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recentNode, *current;

	recentNode = (list_t *)malloc(sizeof(list_t));
	if (recentNode == NULL)
	{
		return (0);
	}

	recentNode->str = strdup(str);
	recentNode->len = strlen(str);
	recentNode->next = NULL;
	if (*head == NULL)
	{
		*head = recentNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = recentNode;
	}

	return ((*head));
}
