#include <stdio.h>
#include "main.h"
/**
 * _strcmp - This fuction compare strings
 *
 * @s1: gets the first string
 * @s2: gets the second string
 *
 * Return: Returns the final the output
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, letter = 15, len_i, len_j;
	char word_a, word_b;

	while (*s1 != '\0' && *s2 != '\0')
	{
		len_i++;
		len_j++;
		s1++;
		s2++;
	}
	for (i = 0; i < len_i; i++)
	{
		for (j = 0; j < len_j; j++)
		{
			word_i = s1[i];
			word_j = s2[i];
			if (word_i < word_j)
			{
				ans *= -1;
				return (ans);
			}
			else if (word_i > word_j)
			{
				return (letter);
			}
			else
			{
				return (0);
			}
		}
	}
	return (0);
}
