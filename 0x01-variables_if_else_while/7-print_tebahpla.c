#include <stdio.h>
/**
 * main - Entry point for the code
 *
 * Return: (0) (Success)
 */
int main(void)
{
	char n;

	n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
