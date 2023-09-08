#include <stdlib.h>
#include "main.h"
/**
 *calloc - for creat an array
 *description: this function for creat an aarray
 *@nmemb: the row size
 *@size: the column size
 *Return: NULL if c is 0 or fail else the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int *y;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == 0)
		return (NULL);
	y = arr;
	for (x = 0; x < (size * nmemb); x++)
		y[x] = '0';

	return (arr);
}
