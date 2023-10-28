#include <stdio.h>
#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @n: String to be searched for any match.
 * @allow: String that searches.
 *
 * Return: The amount of bytes or matches
 */
unsigned int _strspn(char *n, char *allow)
{
	int count = 0, flag;
	char *word = allow;

	while (*n)
	{
		flag = 0;
		while (*allow)
		{
			if (*allow == *n)
			{
				flag = 1;
				count++;
				break;
			}
			allow++;
		}
		n++;
		allow = word;
		if (flag == 0)
		{
			break;
		}
	}
	return (count);
}
