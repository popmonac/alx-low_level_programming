#include <stdio.h>
#include "dog.h"

/**
 * init_dog - This Function that create a struct for a dog log
 *
 * @g: gets the name of the dog
 * @name: gets the name of the dog
 * @age: gets the name of the dog
 * @owner: gets the name of the owner
 */

void init_dog(struct dog *g, char *name, float age, char *owner)
{
	if (g == NULL)
		return;

	g->name = name;
	g->age = age;
	g->owner = owner;
}
