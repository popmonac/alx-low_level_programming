#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This Funtion that print info of a dog log
 *
 * @g: gets the address of the struct
 *
 */

void print_dog(struct dog *g)
{
	if ((g->name) == NULL)
		g->name = "(nill)";
	if ((g->age) == 0)
		g->age = 0;
	if ((g->owner) == NULL)
		g->owner = "(nill)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", g->name, g->age, g->owner);
}
