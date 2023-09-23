#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - for free dog structue
 *description: this function for free a struct dog
 *@d: the dog pointer
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
