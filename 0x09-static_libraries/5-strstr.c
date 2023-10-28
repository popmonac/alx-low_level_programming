#include <stdio.h>
#include "main.h"

/**
 * _strstr - This function that locates a substring
 *
 * @haystack: gets the string from main.c
 * @needle: gets the substring from main.c
 *
 * Return: The output
 */

char *_strstr(char *haystack, char *needle)
{
	char *check_1 = needle, *check_2 = haystack;

	while (*haystack)
	{
		check_2 = haystack;
		needle = check_1;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = check_2 + 1;
	}
	return (NULL);
}
