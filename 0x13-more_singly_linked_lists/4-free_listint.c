#include "lists.h"
/**
 *free_listint - for free of list of int
 *description: this function for free the elements of a listint_t list.
 *@head: the list pointer
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *x;
	unsigned int i;

	for (i = 0; head->next == NULL; i++)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
