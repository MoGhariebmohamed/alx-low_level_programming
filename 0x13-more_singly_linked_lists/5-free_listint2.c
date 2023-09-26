#include "lists.h"
/**
 *free_listint2 - for free of list of int
 *description: this function for free the elements of a listint_t list.
 *@head: the list pointer
 *Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *x;
	listint_t *alth;
	unsigned int i;

	if (head == NULL)
		return;

	alth = *head;
	for (i = 0; alth != NULL; i++)
	{
		x = alth;
		alth = alth->next;
		free(x);
	}
	*head = NULL;

}
