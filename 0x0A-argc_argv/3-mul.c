int multipy(int num1, int num2);
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * multiply - This function  that multiply two number
 *
 * @num1: gets the first the argument
 * @num2: gets the second the argument
 *
 * Return: The results to the main function
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - This function that calls multiply
 *
 * @argc: gets how many arguments passed on the terminal
 * @argv: gets the arguments passed that is INT
 *
 * Return: Always (Success)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", multiply(a, b));
	return (0);
}
