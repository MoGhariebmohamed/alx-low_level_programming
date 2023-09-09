#include <stdlib.h>
#include "main.h"
/**
 *_realloc - for reallocate an array
 *description: this function for reallocate an aarray
 *@ptr: the pointer
 *@old_size: the array old size
 *@new_size: the new size for array
 *Return: NULL if c is 0 or fail else the array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	int *newarr;
	int *newptr;
	unsigned int x;

	if (old_size == new_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
		{
			return (NULL);
		}
		return (arr);
	}
	else if (new_size > old_size)
	{
		newptr = ptr;
		arr = malloc(new_size);
		if (arr == 0)
		{
			free(ptr);
			return (NULL);
		}
		newarr = arr;
		for (x = 0; x < old_size && x < new_size; x++)
		newarr[x] = newptr[x];

	free(ptr);
	}
	return (arr);
}
