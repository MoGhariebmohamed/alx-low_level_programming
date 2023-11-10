#include "lists.h"
/**
 *dlistint_len - for return numnber of elements
 *description: this function for return the number of elements of a list_t
 *@h: the list pointer
 *Return: number of elements of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	if (h == NULL)
		return (x);
	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
		return (x);
}
