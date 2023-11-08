#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - This function checks the operation
 *
 * @g: gets the operation
 *
 * Return: The operation
 */

int (*get_op_func(char *g))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int n = 0;

	while (n < 5)
	{
		if (!strcmp(ops[n].op, g))
			return (ops[n].f);
		n++;
	}
	return (NULL);
}

