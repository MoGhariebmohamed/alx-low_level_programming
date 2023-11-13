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

	if (*needle == 0)
	{
		return (haystack);
	}
	for (x = 0; haystack[x] == needle[x]; x++)
	{
		return (haystack);

	}
	return (NULL);
}
