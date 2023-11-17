#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This funtion add node to the beggining of linked list
 *
 * @head: GET the head pointer
 * @str: Get the string
 *
 * Return: The list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *recentNode;

	recentNode = (list_t *)malloc(sizeof(list_t));
	if (recentNode == NULL)
	{
		return (0);
	}

	recentNode->str = strdup(str);
	recentNode->len = strlen(str);
	recentNode->next = *head;

	*head = recentNode;
	return ((*head));
}
