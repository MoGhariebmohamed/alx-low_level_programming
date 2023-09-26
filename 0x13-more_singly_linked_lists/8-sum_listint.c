#include "lists.h"
/**
 *sum_listint - for sum the nodes
 *description: this function for sum all the data (n) of a listint_t
 *@head: the list pointer
 *Return: sum of dataif valid or 0 of list is empty
*/
int sum_listint(listint_t *head)
{
	unsigned int i;
	int total;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{

		total += head->n;
		head = head->next;
	
	}
	return (total);
}
