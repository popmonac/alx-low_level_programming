#include <stdlib.h>
#include "main.h"

/**
 * argstostr - This function concatenates all arguments of your program
 * from command line
 *
 * @argc: gets the number of arguments from command line
 * @argv: gets the array containing arguments from the command line
 *
 * Return: A pointer to string that containing all arguments
 * or NULL if argc == 0, if argv == NULL, or upon failure.
 */

char *argstostr(int argc, char **argv)
{
	char *pt_new_str;
	int length = 0, i = 0, j, k = 0;

	if (argc <= 0 || argv == NULL)
		return (NULL);

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			length++;
		length++;
	}

	pt_new_str = malloc(sizeof(char) * length + 1);
	if (pt_new_str == NULL)
		return (NULL);

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			pt_new_str[k] = argv[i][j];
			k++;
		}
		pt_new_str[k] = '\n';
		k++;
	}
	return (pt_new_str);
}
