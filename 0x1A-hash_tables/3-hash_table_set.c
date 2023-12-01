#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: the hash table
 *@key: the key of value
 *@value: the index value
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *newnode, *mynode;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	mynode  = ht->array[index];
	while (mynode)
	{
		if (strcmp(mynode->key, key) == 0)
		{
			free(mynode->value);
			mynode->value = strdup(value);
			return (1);
		}
		mynode = mynode->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	return (0);
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
