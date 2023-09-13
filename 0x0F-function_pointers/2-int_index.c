#include "function_pointers.h"
/**
 *int_index - for excute an array
 *description: function executes as a parameter on each element of an array
 *@array: pointer to an array
 *@size: size of array
 *@cmp: function pointer to be used to compare values
 *Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
	if (cmp(array[x]) != 0)
		return (x);
	}
	return (-1);
}
