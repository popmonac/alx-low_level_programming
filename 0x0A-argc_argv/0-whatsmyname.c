#include <stdio.h>

/**
 * main - This function print the argument passed on the command line
 *
 * @argc: getsthe lenght of the string
 * @argv: gets the name of the argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
