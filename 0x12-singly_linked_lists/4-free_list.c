#include "lists.h"
/**
 *free_list - for free list
 *description: this function for free number of elements of a list_t
 *@head: the list pointer
 *Return: NULL
 */
void free_list(list_t *head)
{
	list_t *new;
	unsigned int x;

	for (x = 0; head; x++)
	{
		new = head->next;
		free((*head).str);
		free(head);
		head = new;
	}
}
