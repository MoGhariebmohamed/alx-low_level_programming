#include "lists.h"
/**
 *list_len - forreturn numnber of elements
 *description: this function for return the number of elements of a list_t
 *@h: the list pointer
 *Return: number of elements of list
 */
size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		h = h->next;
	}
		return (x);
}
