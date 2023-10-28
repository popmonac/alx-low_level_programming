#include <stdio.h>
#include "main.h"

/**
 * main - This function  that print agrument passed in the command line
 *
 * @argc: gets how many arguments passed on the terminal
 * @argv: gets the arguments passed that is STRING
 *
 * Return: Always (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
