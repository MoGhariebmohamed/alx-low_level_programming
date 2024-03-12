#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "search_algos.h"

/**
 *linear_search - for searches for a value in an array
 *description: this function  using the Linear search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: the size for array
 *@value:  value to search for target
 *Return: must return the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (value == array[x])
			 printf("Value checked array[%u] = [%d]\n", x, array[x]);
			return (x);
	}
	return (-1);
}
