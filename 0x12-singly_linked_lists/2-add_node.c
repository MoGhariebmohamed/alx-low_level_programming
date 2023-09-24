#include "lists.h"
#include <string.h>
/**
 *add_node - for add anode at the beginning of a list
 *description: this function for add anode at the beginning of  list_t list
 *@str: the list pointer
 *@head: pointer to the head
 *Return: adress of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int x;
	char *duplicate;
	list_t *node;

	node = malloc(sizeof(list_t));
	duplicate = strdup(str);
	if (node == NULL || duplicate == NULL)
	{
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		(*node).str = duplicate;
		(*node).len = x + 1;
		(*node).next = *head;
	}
		 *head = node;
	return (node);
}
