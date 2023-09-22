#include "lists.h"
/**
 *getlength - to get string length
 *@str: a pointer to string
 *Return: string length
 */
int getlength(char *string)
{
	int x = 0;

	if (string == NULL)
	return (0);
	for (x = 0; *string != '\0'; x++)
	{
		x += x ;
	}
	return (x);
	
}
/**
 *print_list - for print a list 
 *description: this function for print a the elements of a list_t list.
 *@s: the list pointer
 *Return: number if nodes if exist 
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
		printf("[%d] %s\n", getlength(h->str), h->str);
		}
		else if (h->str == NULL)
		{
			printf("[%d] %s\n", getlength(h->str), "nil");
		}
		h = h->next;
		x++;
	}
	return (x);
}
