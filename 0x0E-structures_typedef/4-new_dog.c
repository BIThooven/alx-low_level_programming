#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a func to create a new dog
 * @name: member of the structure
 * @age: member of the structure
 * @owner: member of the structure
 * Return: returns value other than NULL when success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
