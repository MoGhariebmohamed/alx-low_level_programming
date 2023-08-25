#include "main.h"
/**
 *_strncat - for conctates two strings
 *description: this function for conactes two strings
 *@dest: the int pointer for a first string
 *@src: the pointer for second string
 *@n: integer for count
 *Return: char sucess
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x]; x++)
		;
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];

	dest[x + y] = '\0';
	}
	return (dest);
}
