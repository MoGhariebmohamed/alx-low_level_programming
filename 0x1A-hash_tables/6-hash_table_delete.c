#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_delete -  that delete a hash table.
 *Description: theis function to get values from table
 *@ht: the hash table
 *Return: the value associated with the element, or NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *mynode, *rep;
	unsigned long int x ;

	for (x = 0; x < ht->size; x++)
	{
		mynode = ht->array[x];
		while (mynode != NULL)
		{
			rep = mynode;
			mynode = mynode->next;
			free(rep->key);
			free(rep->value);
			free(rep);
		}
	}
	free(ht->array);
	free(ht);
}
