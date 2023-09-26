#include "lists.h"
/**
 *add_nodeint_end - for add node at end of list of int
 *description: this function for add node at end of list of int listint_t
 *@n: the number of nodes
 *@head: pointer of head pointer
 *Return: number if nodes if exist
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *end;
	unsigned int x;


	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	(*end).n = n;
	(*end).next = NULL;
	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		node = *head;
		for (x = 0; node->next != NULL; x++)
		{
			node = node->next;
		}
			node->next = end;
	}


	return (*head);
}
