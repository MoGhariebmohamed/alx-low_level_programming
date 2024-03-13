#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "search_algos.h"

/**
 *binary_search - for searches for a value in an array
 *description: this function  using the Linear search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: the size for array
 *@value:  value to search for target
 *Return: must return the first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	unsigned int x;
	size_t right_ptr, left_ptr;

	if (array == NULL)
		return (-1);

	for (left_ptr = 0, right_ptr = size - 1; right_ptr >= left_ptr;)
	{
		printf("Searching in array: ");
		for (x = left_ptr; x < right_ptr; x++)
		{
			printf("%d, ", array[x]);
		}
		printf("%d\n", array[x]);
		x = left_ptr + (right_ptr - left_ptr) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right_ptr = x - 1;
		else
			left_ptr = x + 1;
	}
	return (-1);
}
