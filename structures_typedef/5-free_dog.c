#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees dog
 * @d: Dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
