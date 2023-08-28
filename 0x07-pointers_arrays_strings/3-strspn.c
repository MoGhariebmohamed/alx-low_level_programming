#include "main.h"
/**
 *_strspn - for length of string
 *description: this function for locating char in string
 *@s: the string to be printed
 *@accept: the location of the string
 *Return: c  succes or null if not found
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x]  >= '\0'; x++)
	{
		for (y = 0; accept[y] >= '\0'; y++)
		{
				if (accept[y] == '\0')
				{
					return (x);
				}
		}
	}
		return (x);
}
