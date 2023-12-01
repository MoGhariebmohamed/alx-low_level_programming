#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_print -  that prints a hash table.
 *@ht: the hash table
 *Return: the value associated with the element, or NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int x, y;
	hash_node_t *mynode;

	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		mynode = ht->array[x];
	while (mynode != NULL)
	{
	if (y != 0)
	printf(", ");
	y = 1;
	printf("'%s': '%s'", mynode->key, mynode->value);
	mynode = mynode->next;
	}
	}
	printf("}\n");
}
