#include "main.h"
/**
 *_strpbrk - for search  of string
 *description: this function for searching the stringfor any bytes
 *@s: the string to be printed
 *@accept: the location of the sub string
 *Return: char  succes
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;
	char *p;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
		}
	}
	return (0);
}
