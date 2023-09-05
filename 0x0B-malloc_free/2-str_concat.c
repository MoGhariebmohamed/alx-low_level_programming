#include <stdlib.h>
#include "main.h"
/**
 *str_concat - for concatenates two strings
 *description: this function for concatenates two strings
 *@s1: first string size
 *@s2: second string
 *Return: NULL if c is 0 or fail else the array
 */
char *str_concat(char *s1, char *s2)
{
	char *dstring;
	int x;
	int y;

	if (s1 == NULL)
	{
		s1 = "\0";
	}	
	else if (s2 == NULL)
	{
		s2 = "\0";
	}
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
		dstring = malloc(sizeof(char) * (x +y + 2));
	if (dstring == NULL)
	{
		return (NULL);
	}
		else
	{
		for (x = 0; x != '\0'; x++)
		{
			dstring[x] = str[x];
		}
		for (y = 0; y != 0; y++)
		{
			dstring[x] = str[y];
		}
	}
	return (dstring);
}
