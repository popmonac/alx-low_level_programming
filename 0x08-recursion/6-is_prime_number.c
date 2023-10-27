#include <stdio.h>
#include "main.h"

/**
 * _prime_checker - This function that checks for prime numbers
 *
 * @number: This argument from main.c
 *
 * Return: Always 1 (is_prime)
 */
int _prime_checker(int number)
{
	if (number < 0)
		number *= -1;
	if (number == 1)
		return (0);
	else if (number % 2 == 0 || number % 3 == 0 || number % 5 == 0
			|| number % 7 == 0 || number % 11 == 0)
		return (0);
	else
		return (1);
}

/**
 * is_prime_number - Funtion that checks for prime number
 * @k: Fetches the argument from main.c
 *
 * Return: Always 1 (Success)
 */

int is_prime_number(int k)
{
	return (_prime_checker(k));
}
