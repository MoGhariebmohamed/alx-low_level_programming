#include <stdlib.h>
#include "main.h"
/**
 *create_array - for creat an array
 *description: this function for creat an aarray
 *@size: the string size
 *@c: the charachter in string
 *Return: NULL if c is 0 or fail else the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= size; x++)
	{
		array[x] = c;
	}
		return (array);
}
