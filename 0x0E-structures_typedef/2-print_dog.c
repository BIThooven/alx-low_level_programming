#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a dog struct
 * @d: a struct tag
 * Return: void func returns nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == 0)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0 || d->owner == 0)
	{
		printf("(nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
