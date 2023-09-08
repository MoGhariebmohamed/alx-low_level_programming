#include <stdlib.h>
#include "main.h"
/**
 *calloc - for creat an array
 *description: this function for creat an aarray to 0
 *@nmemb: the row size
 *@size: the column size
 *Return: NULL if c is 0 or fail else the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int *y;
	unsigned int x;

	arr = malloc(size * nmemb);
	if (nmemb == 0 || size == 0 || arr == 0)
	{
		return (NULL);
	}
	for (x = 0; x <= (size * nmemb); x++)
	{
		y = arr;
		y[x] = '\0';
	}
		return (arr);
}
