#include "lists.h"
/**
 *print_dlistint - for print a list of int
 *description: this function for print a the elements of a listint_t list.
 *@h: the list pointer
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n_node = 0;

	if (h == NULL)
	return (n_node);
	for (n_node = 0; h != NULL; n_node++)
	{
		printf("%d\n", h->n);
		 h = h->next;
	}
	return (n_node);
}
