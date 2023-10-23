#include <stdio.h>
#include "main.h"

/**
 * set_string - This function sets the value of a pointer to a char.
 * @i: gets the string the argument
 * @to: gets the second pointer
 */

void set_string(char **i, char *to)
{
	*i = to;
}
