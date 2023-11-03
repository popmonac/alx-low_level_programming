#include <stdlib.h>
#include "main.h"

/**
 * _realloc - This function reallocates a memory block using malloc and free
 *
 * @ptr: Old pointer
 * @past_size: old pointer size
 * @present_size: present_size pointer size
 *
 * Return: Return the new allocated memory
 */

void *_realloc(void *ptr, unsigned int past_size, unsigned int present_size)
{
	unsigned int a;
	char *ptr_new;
	char *save = (void *)ptr;

	if (present_size == past_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(present_size);
		return (ptr);
	}
	if (present_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_new = malloc(present_size);
	if (ptr_new == NULL)
		return (NULL);
	for (a = 0; a < past_size; a++)
		ptr_new[a] = save[a];
	free(ptr);
	return ((void *)ptr_new);
}
