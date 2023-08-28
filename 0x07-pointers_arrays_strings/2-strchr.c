#include "main.h"
/**
 *_strchr - for locating charachter in string
 *description: this function for locating char in string
 *@s: the string to be printed
 *@c: the location of the string
 *Return: c  succes or null if not found
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; *s >= '\0'; x++)
	{
	if (s[x] == c)
	{
	return (s + x);
	}
	}
		return (NULL);
}
