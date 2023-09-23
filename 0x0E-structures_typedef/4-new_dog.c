#include "dog.h"
#include <stdlib.h>
/**
 *length - for string length
 *description: this function for get string length
 *@string: the string
 *Return: int
 */
int length(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	(void)*string++;
	}
	return (i);
}
/**
 *getstring - for copy from old string to new
 *description: this function for copy from old string to new
 *@new: the new string
 *@old: the old string
 *Return: char
 */
char *getstring(char *new, char *old)
{
	int x;

	for (x = 0; old[x] != '\0'; x++)
	{
		new[x] = old[x];
	}
	new[x] = '\0';
	return (new);

}
/**
 *new_dog - for creates a new dog
 *description: this function for allocate memory using malloc
 *@name: the dog name
 *@age: dog age
 *@owner: dog owner
 *Return: NULL if fail or dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mem;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	mem = malloc(sizeof(dog_t));
	if (mem == NULL)
		return (NULL);
	mem->name = malloc(sizeof(char) * (length(name) + 2));
	if (mem->name == NULL)
	{
		free(mem);
		return (NULL);
	}
	mem->owner = malloc(sizeof(char) * (length(owner) + 2));
		if (mem->owner == NULL)
		{
			free(mem);
			free(mem->name);
			return (NULL);
		}
		mem->name = getstring(mem->name, name);
		mem->age = age;
		mem->owner = getstring(mem->owner, owner);
		return (mem);
}
