#include "lists.h"
/**
 *pop_listint - for delete the first node of head
 *description: this function for delete the first node of a listint_t list.
 *@head: the list pointer
 *Return: int if valid or 0 of list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *x;
	int i;

	if (*head == NULL)
		return (0);

	x = *head;
	*head = (*head)->next;
	i = (*head)->n;

	free(x);
	return (i);
}
