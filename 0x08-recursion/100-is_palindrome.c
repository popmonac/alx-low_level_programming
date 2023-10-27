#include <stdio.h>
#include "main.h"

int check_pal(char *x, int i, int length);
int _strlen_recursion(char *x);

/**
 * is_palindrome - this function checks if a string is a palindrome
 * @x: string to reverse
 * Return: 1 yes, 0 it'x not
 */

int is_palindrome(char *x)
{
	if (*x == 0)
		return (1);
	return (check_pal(x, 0, _strlen_recursion(x)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @x: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *x)
{
	if (*x == '\0')
		return (0);
	return (1 + _strlen_recursion(x + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @x: string to check
 * @i: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *x, int i, int length)
{
	if (*(x + i) != *(x + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pal(x, i + 1, length - 1));
}
