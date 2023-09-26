#include "lists.h"
/**
 *add_nodeint - foradd node at beginninga of list of int
 *description: this function for add node at beginning of list of int listint_t
 *@n: the number of nodes
 *@head: pointer of head pointer
 *Return: number if nodes if exist
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;


	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	(*node).n = n;
	node->next = *head;
	*head = node;

	return (node);
}
