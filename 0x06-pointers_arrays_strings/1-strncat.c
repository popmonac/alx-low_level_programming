#include "main.h"
/**
 * _strncat - This function concatenate n  number of strings
 *
 * @dest: gets argument from main.c
 * @src: gets argument from main.c
 * @n: gets the argument from main.c
 *
 * Return: Prints the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	while (*src != '\0')
	{
		len++;
		src++;
	}

	while (*dest != '\0')
	{
		dest++;
	}

	if (n > len)
		n = len;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (dest);
}
