#include "main.h"
/**
 *_strstr - for locate sub string
 *description: this function locating the stringfor any bytes
 *@haystack: the string
 *@needle: the sub string
 *Return: char  succes
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;
	char *p;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (needle[y] == haystack[x])
			{
				p = &haystack[x];
				return (p);
			}
		}
	}
	return (NULL);
}
