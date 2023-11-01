#include "main.h"
#include <stdlib.h>

/**
 * count_word - This function count the number of words in a string
 * @s: string to evaluate
 *
 * Return: Returns no of string
 */
int count_word(char *s)
{
	int stop, i, j;

	stop = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			stop = 0;
		else if (stop == 0)
		{
			stop = 1;
			j++;
		}
	}
	return (j);
}

/**
 * **strtow - This function splits a string into words
 * @str: The string to be splitted
 * Return: This return pointer to a string of word or Null if fails
 */

char **strtow(char *str)
{
	char **dimension, *ind;
	int i = 0, k = 0, len = 0, words, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	dimension = (char **) malloc(sizeof(char *) * (words + 1));
	if (dimension == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (i)
			{
				end = i;
				ind = (char *) malloc(sizeof(char) * (i + 1));
				if (ind == NULL)
					return (NULL);
				while (start < end)
					*ind++ = str[start++];
				*ind = '\0';
				dimension[k] = ind - i;
				k++;
				i = 0;
			}
		}
		else if (i++ == 0)
			start = i;
	}

	dimension[k] = NULL;
	return (dimension);
}
