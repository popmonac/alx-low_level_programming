#include <stdio.h>
#include "main.h"
/**
 * leet - This function changes some strings to integer
 *
 * @wrd: gets the argument
 *
 * Return: Returns the outcome
 **/
char *leet(char *wrd)
{
	int i = 0, j;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char chr[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (wrd[i])
	{
		for (j = 0; j < 10; j++)
			if (wrd[i] == chr[j])
				wrd[i] = subs[j];
		i++;
	}
	return (wrd);
}
