#include <stdio.h>
#include "main.h"
/**
 * _strspn - This function gets the length of a prefix substring.
 *
 * @s: This String searched for any match.
 * @accept: This String searches.
 *
 * Return: The amount of bytes or matches
 */
unsigned int _strspn(char *s, char *accept)
{
	int track = 0, flag;
	char *word = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				flag = 1;
				track++;
				break;
			}
			accept++;
		}
		s++;
		accept = word;
		if (flag == 0)
		{
			break;
		}
	}
	return (track);
}
