#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a func to free dog
 * @d: a tag
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
