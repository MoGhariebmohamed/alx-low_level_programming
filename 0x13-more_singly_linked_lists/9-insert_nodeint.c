#include "lists.h"
/**
 *insert_nodeint_at_index - for add node at certain position of list of int
 *description: this function for inserts a new node at a given position
 *@n: the number of nodes
 *@idx: the index of the list where the new node should be added
 *@head: pointer of head pointer
 *Return: number if nodes if exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *list;
	unsigned int x;


	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)

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
