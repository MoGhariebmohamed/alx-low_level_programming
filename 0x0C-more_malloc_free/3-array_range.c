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

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (x = 0; arr[x] < (max - min + 1); x++)
	{
	arr[x] = min++;
	}
	return (arr);
}
