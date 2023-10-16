#include <stdio.h>
/**
 * main - Entry point for the code
 *
 * Return: (0) (Success)
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
			l++;
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
