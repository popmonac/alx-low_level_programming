int string_spacing(char chr);
#include <stdio.h>
#include "main.h"
/**
 * cap_string - This function which Changes the first character to a string
 *
 * @wrd: gets the argument from main.c
 *
 * Return: Returns the outcome
 */
char *cap_string(char *wrd)
{
	char *word = wrd;
	int i = 0;

	while (wrd[i])
	{
		if (i == 0 && (wrd[i] >= 'a' && wrd[i] <= 'z'))
		{
			wrd[i] -= 32;
		}
		else if (string_spacing(wrd[i]) && wrd[i + 1] >= 'a' && wrd[i + 1] <= 'z')
		{
			wrd[i + 1] -= 32;
		}
		i++;
	}
	return (word);
}

/**
 * string_spacing - This funtion create spacing between the string
 *
 * @chr: gets the spacing for cap_string
 *
 * Return: (1) (Success)
 */
int string_spacing(char chr)
{
	int j;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (j = 0 ; j < 13; j++)
	{
		if (chr == seperators[j])
		{
			return (0);
		}
	}
	return (0);
}
