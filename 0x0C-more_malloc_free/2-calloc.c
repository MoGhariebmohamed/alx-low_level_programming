#include <stdlib.h>
#include "main.h"
/**
 *_calloc - for creat an array
 *description: this function for creat an aarray
 *@nmemb: the row size
 *@size: the column size
 *Return: NULL if c is 0 or fail else the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == 0)
		return (NULL);
	for (x = 0; x < (size * nmemb); x++)
		*(arr + x) = 0;

	return ((void *)arr);
}
