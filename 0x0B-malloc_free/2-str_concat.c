#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - This function concatenate two strings
 *
 * @s1: gets the argument first string
 * @s2: gets the argument second string
 *
 * Return: this returns concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int  a = 0, n, length_1, length_2;
	char *pt_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_1 = strlen(s1);
	length_2 = strlen(s2);

	pt_string = (char *)malloc(sizeof(char) * (length_1 + length_2 + 1));

	if (pt_string == NULL)
		return (NULL);
	for (n = 0; n < length_1 + length_2; n++)
	{
		pt_string[n] = *(s1 + n);
		if (n >= length_1)
		{
			pt_string[n] = *(s2 + a);
			a++;
		}

	}
	return (pt_string);
}
