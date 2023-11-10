#include "lists.h"
#include <string.h>
/**
 *add_dnodeint - for add anode at the beginning of a list
 *description: this function for add anode at the beginning of  list_t list
 *@n: the list pointer
 *@head: pointer to the head
 *Return: adress of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
