#include <stdlib.h>
#include "main.h"
/**
 *_strdup - for creat a memor for double string
 *description: this function for creat a space in memor
 *@str: the string size
 *Return: NULL if c is 0 or fail else the array
 */
char *_strdup(char *str)
{
	char *dstring;
	int x;
	int y;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
		;
		dstring = malloc(sizeof(*str) * x + 1);
	if (dstring == NULL)
	{
		return (NULL);
	}
		else
	{
		for (y = 0; y <= x; y++)
			dstring[y] = str[y];
	}
	return (dstring);
}
