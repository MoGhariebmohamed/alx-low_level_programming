#include "lists.h"
/**
 *print_list - for print a list
 *description: this function for print a the elements of a list_t list.
 *@h: the list pointer
 *Return: number if nodes if exist
 */
size_t print_list(const list_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		if (h->str != NULL)
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		else if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		 h = h->next;
	}
	return (x);
}
