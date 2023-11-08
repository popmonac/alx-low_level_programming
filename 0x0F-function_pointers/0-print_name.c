#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Funtion that print a name
 *
 * @name: get the string
 * @g: Calls the funtion
 *
 * Return: Nothing
 */

void print_name(char *name, void (*g)(char *))
{
	if (g == NULL || name == NULL)
		return;
	g(name);
}
