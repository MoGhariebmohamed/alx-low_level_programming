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
	list_t *new, *end;
	int x;
	char *duplicate;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		new->str = duplicate;
		new->len = x + 1;
		new->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new;
	}
	else if (*head != NULL)
	{
		end = *head;
		for (x = 0; end->next != NULL; x++)
		{
			end = end->next;
		}
		end->next = new;
	}
	return (*head);
}
