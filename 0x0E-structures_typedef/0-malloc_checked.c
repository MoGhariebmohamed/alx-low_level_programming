#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - for allocate memory
 *description: this function for allocate memory using malloc
 *@b: the charachter in string
 *Return: 98 if b is 0 or fail else the pointer
 */
void *malloc_checked(unsigned int b)
{
	int *all;

	all = malloc(b);
	if (b == 0 || all == NULL)
	{
		exit(98);
	}
		return (all);
}
