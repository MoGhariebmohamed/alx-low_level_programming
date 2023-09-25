#include "lists.h"
/**
 *listint_len - for print a length of list of int
 *description: this function for return the elements of a listint_t list.
 *@h: the list pointer
 *Return: number if nodes if exist
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
