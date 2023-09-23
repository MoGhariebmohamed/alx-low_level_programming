#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - for variables initiation
 *description: this function for allocate memory using malloc
 *@d: the dog name
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		(*d).name = name;
		d.age = age;
		d->owner = owner;
	}
}
