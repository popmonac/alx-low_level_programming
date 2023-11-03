#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_digit - This checks if a string contains a non-digit char
 * @s: The string to be evaluated
 * Return: 0 if a non-digit is found
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length_1, length_2, length, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length_1 = strlen(s1);
	length_2 = strlen(s2);
	length = length_1 + length_2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length_1 + length_2; i++)
		result[i] = 0;
	for (length_1 = length_1 - 1; length_1 >= 0; length_1--)
	{
		digit1 = s1[length_1] - '0';
		carry = 0;
		for (length_2 = strlen(s2) - 1; length_2 >= 0; length_2--)
		{
			digit2 = s2[length_2] - '0';
			carry += result[length_1 + length_2 + 1] + (digit1 * digit2);
			result[length_1 + length_2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length_1 + length_2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
