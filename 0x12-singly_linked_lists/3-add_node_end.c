#include "lists.h"
#include <string.h>
/**
 *add_node_end - for add anode at the end of a list
 *description: this function for add anode at the end of  list_t list
 *@str: the list pointer
 *@head: pointer to the head
 *Return: adress of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int x;
	char *duplicate;
	list_t *node;
	list_t *end;

	node = malloc(sizeof(list_t));
	duplicate = strdup(str);
	if (node == NULL || str == NULL || duplicate == NULL)
	{
		free(node);
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
	{
		(*node).str = duplicate;
		(*node).len = x + 1;
		(*node).next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		end = *head;
		do {
			end = end->next;
			end->next = node;
		} while ((*end).next != NULL);
	}
	}
	return (node);
}
