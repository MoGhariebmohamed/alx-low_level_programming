#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *hash_table_create - for creating a hash table
 *description: this function for creating a hash table
 *@size: the int pointer for a
 *Return: Null if fail to malloc or the Hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *NewTable;
	unsigned int x;

	NewTable = malloc(sizeof(hash_table_t));
	if (NewTable == NULL)
		return (NULL);
	NewTable->size = size;
	NewTable->array = malloc(sizeof(hash_node_t *) * size);
	if (NewTable->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
	NewTable->array[x] = NULL;
	}
	return (NewTable);
}
