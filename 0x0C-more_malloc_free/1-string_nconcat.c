#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - This function create a concatenated string
 *
 * @k: gets the argument string
 *
 * Return: Length of the passed string
 */

int _strlen(char *k)
{
	int length = 0;

	while (*k)
	{
		length++;
		k++;
	}

	return (length);
}

/**
 * string_nconcat - This function create a allocation in memory
 *
 * @i: gets the first string argument
 * @j: gets the second string argument
 * @n: gets the size of the byte
 *
 * Return: The concatinated string
 */

char *string_nconcat(char *i, char *j, unsigned int n)
{
	int a, b = 0, length_a, final_lenght;
	unsigned int length_b;
	char *ptr_concat_string;

	if (i == NULL)
		i = "";
	if (j == NULL)
		j = "";

	length_a = _strlen(i);
	length_b = _strlen(j);

	if (n >= length_b)
		n = length_b;
	final_lenght = length_a + n;
	ptr_concat_string = malloc(sizeof(char) * final_lenght + 1);
	if (ptr_concat_string == NULL)
		return (NULL);
	for (a = 0; a < final_lenght; a++)
	{
		*(ptr_concat_string + a) = i[a];
		if (a >= length_a && a < final_lenght)
		{
			*(ptr_concat_string + a) = j[b];
		b += 1;
		}
	}
	ptr_concat_string[final_lenght] = '\0';
	return (ptr_concat_string);
}
