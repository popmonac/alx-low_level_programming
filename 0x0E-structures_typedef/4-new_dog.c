#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - This Function that create a dog log book
 *
 * @name: gets the name of the dog
 * @age: gets the age of the dog
 * @owner: gets the owner name
 *
 * Return: The the newdog log
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *log_book;
	char *_name, *_owner;
	int name_length, owner_length, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	name_length = strlen(name);
	owner_length = strlen(owner);
	log_book = malloc(sizeof(dog_t));
	if (log_book == NULL)
	{
		free(log_book);
		return (NULL);
	}
	_name = malloc(name_length + 1);
	if (_name == NULL)
	{
		free(_name);
		return (NULL);
	}
	for (i = 0 ; name[i]; i++)
		_name[i] = name[i];
	_name[i] = '\0';
	_owner = malloc(owner_length + 1);
	if (_owner == NULL)
	{
		free(_owner);
		return (NULL);
	}

	for (i = 0; owner[i]; i++)
		_owner[i] = owner[i];
	_owner[i] = '\0';
	log_book->name = _name;
	log_book->age = age;
	log_book->owner = _owner;
	return (log_book);
}
