#include <stdio.h>
#include "main.h"
/**
 * _strcmp - This fuction that compare strings
 *
 * @i: gets the first string
 * @j: gets the second string
 *
 * Return: Returns the final the output
 */
int _strcmp(char *i, char *j)
{
	int a, b, ans = 15, len_a, len_b;
	char word_a, word_b;

	while (*i != '\0' && *j != '\0')
	{
		len_a++;
		len_b++;
		i++;
		j++;
	}
	for (a = 0; a < len_a; a++)
	{
		for (b = 0; b < len_b; b++)
		{
			word_a = i[a];
			word_b = j[a];
			if (word_a < word_b)
			{
				ans *= -1;
				return (ans);
			}
			else if (word_a > word_b)
			{
				return (ans);
			}
			else
			{
				return (0);
			}
		}
	}
	return (0);
}
