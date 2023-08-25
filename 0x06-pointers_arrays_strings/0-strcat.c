#include "main.h"
/**
 *_strcat - for reset value
 *description: this function for charachter check
 *@dest: the int pointer for a
 *@src: the pointer for b
 *Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x]; x++)
		;
	for (y = 0; src[y]; y++)

	dest[x] = src[y];
	x++;
	return (dest);
}
