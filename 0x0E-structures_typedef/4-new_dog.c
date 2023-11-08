#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - a function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog crreated
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length_a, length_b;

	length_a = strlen(name);
	length_b = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length_a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length_b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}