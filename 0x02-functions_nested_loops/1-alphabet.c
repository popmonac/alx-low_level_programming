#include <stdio.h>
/**
 * print_alphabet - This function prints the lowecase alphabets,
 * then followed by a new line.
 *
 * Return: (0)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
