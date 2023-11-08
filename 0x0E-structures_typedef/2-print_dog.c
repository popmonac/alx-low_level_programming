#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This function that prints a struct dog
 * @g: pointer ti struct dog
 */

void print_dog(struct dog *g)
{
	if (g == NULL)
		return;

	if (g->name == NULL)
		g->name = "(nil)";
	if (g->owner == NULL)
		g->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", g->name, g->age, g->owner);
}
