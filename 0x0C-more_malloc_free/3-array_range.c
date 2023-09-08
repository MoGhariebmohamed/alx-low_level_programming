#include <stdlib.h>
#include "main.h"
/**
 *array_range - for creat an array
 *description: this function for creat an aarray of integers
 *@min: the row size
 *@max: the column size
 *Return: NULL if c is 0 or fail else the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int x;
	int range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);
	for (x = 0; x < range; x++)
	{
	arr[x] = min++;
	}
	return (arr);
}
