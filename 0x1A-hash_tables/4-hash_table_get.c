#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_get - get the value of key from hash table
 *@ht: the hash table
 *@key: the key of value
 *Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *mynode;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	mynode  = ht->array[index];
	while (mynode)
	{
		if (strcmp(mynode->key, key) == 0)
		{
			return (mynode->value);
		}
		mynode = mynode->next;
	}
	return (NULL);
}
