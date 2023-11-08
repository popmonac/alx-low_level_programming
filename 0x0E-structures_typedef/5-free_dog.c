#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This Function that free log_file
 *
 * @g: get the size malloc size
 *
 * Return: Freed memory
 */

void free_dog(dog_t *g)
{
	if (g == NULL)
		return;
	if (g->name != NULL)
		free(g->name);
	if (g->owner != NULL)
		free(g->owner);
	free(g);
}
