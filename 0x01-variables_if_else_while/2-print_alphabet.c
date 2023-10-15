#include <stdio>
/**
 * main - Entry point for the alphabet code
 *
 * Return: (0) (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
