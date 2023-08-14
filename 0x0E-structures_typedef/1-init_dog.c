#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a func to initialize a structure
 * @d: a structure
 * @name: member of the structure
 * @age: member of the structure
 * @owner: member of the structure
 * Return: void returns nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
