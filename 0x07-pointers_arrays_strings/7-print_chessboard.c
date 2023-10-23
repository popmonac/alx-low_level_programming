#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - This function print the chessboard
 * @i: this get argument  from main.c
 *
 * Return: The printed chess board
 */
void print_chessboard(char (*i)[8])
{
	int c = 0, b = 0;
	char output;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			output = i[c][b];
			_putchar(output);
		}
		_putchar('\n');
	}
}
