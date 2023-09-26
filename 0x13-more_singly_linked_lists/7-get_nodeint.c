#include "lists.h"
/**
 *get_nodeint_at_index - for get  nth node 
 *description: this function for gret nth node  of a listint_t list.
 *@head: the list pointer
 *@index: index of the node, starting at 0
 *Return:  the nth node  if valid or NULL of list is empty
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 1; i <= index ; i++)
	{
	if (head == NULL)
		return (NULL);
	else
		head = head->next;
	}
	return (head);
}
