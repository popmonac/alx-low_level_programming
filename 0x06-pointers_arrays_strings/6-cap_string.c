int string_spacing(char chr);
#include <stdio.h>
#include "main.h"

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
