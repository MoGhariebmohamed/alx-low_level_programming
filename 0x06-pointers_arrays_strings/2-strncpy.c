#include "main.h"
/**
 *_strncpy - for cpy the string
 *description: this function for conactes two strings
 *@dest: the int pointer for a first string
 *@src: the pointer for second string
 *@n: integer for count
 *Return: char sucess
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	if (x < n)
	{
		dest[x] = '\0';
	}
	return (dest);
}
