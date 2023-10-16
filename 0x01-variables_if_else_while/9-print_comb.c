#include <stdio.h>
/**
 * main - Entry point of the code
 *
 * Return: (0) (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '8'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('$');
	putchar('\n');
	return (0);
}
