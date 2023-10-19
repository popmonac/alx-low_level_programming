#include <stdio.h>
#include "main.h"
/**
 * _strcat - This function copies strings
 *
 * @dest: get an argument from the main.c
 * @src: get an argumnet from the main.c
 * * @n: Fetches the amount of characters to print
 *
 * Return: prints destination arrrays
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	if (src == NULL || n == 0 || dest == NULL)
	{
		return (dest);
	}

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
