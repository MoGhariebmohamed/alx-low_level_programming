#include "lists.h"
/**
 *print_listint - for print a list of int
 *description: this function for print a the elements of a listint_t list.
 *@h: the list pointer
 *Return: number if nodes if exist
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		printf("%d\n", h->n);
		 h = h->next;
	}
	return (x);
}
