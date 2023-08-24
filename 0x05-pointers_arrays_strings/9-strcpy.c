#include "main.h"
/**
 *_strcpy - for change array content
 *description: this function for print half string new line
 *@src: the char  pointer for a string location
 *@dest: the new position
 *Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = -1; src[x] != '\0'; x++)
	{
		dest[x]  = src[x];
		if (src[x] == '\0')
			break;
	}
		return (dest);
}
