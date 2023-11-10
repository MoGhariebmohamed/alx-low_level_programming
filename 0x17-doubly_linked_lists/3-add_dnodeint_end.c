#include "lists.h"
#include <string.h>
/**
 *add_dnodeint_end - for add anode at the end of a list
 *description: this function for add anode at the end of  list_t list
 *@n: the integer
 *@head: pointer to the head
 *Return: adress of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end, *tmp_n;

	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->prev = NULL;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
			return (new_end);
	}
	if ((*head)->next == NULL)
	{
		(*head)->next = new_end;
		new_end->prev = *head;
			return (new_end);
	}
	tmp_n = *head;
	while (tmp_n->next)
	tmp_n = tmp_n->next;
	tmp_n->next = new_end;
	new_end->prev = tmp_n;
	return (new_end);
}
