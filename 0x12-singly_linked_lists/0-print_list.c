#include "lists.h"
/**
 *getlength - to get string length
 *description: the function to get length of a string
 *@string: a pointer to string
 *Return: string length
 
int getlength(char *string)
{
	int x;

	if (string == NULL)
	return (0);
	for (x = 1; string[x] != '\0'; x++)
	{
		x += 1;
	}
		return (x);

}
*/
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
