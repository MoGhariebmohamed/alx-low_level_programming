#include "function_pointers.h"
/**
 *array_iterator - for excute an array
 *description: function executes as a parameter on each element of an array
 *@array: pointer to an array
 *@size: size of array
 *@action: function pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	
	for (x = 0; x <= size; x++)
	{
	action(array[x]);
	}
}
