#include "main.h"
/**
 *_memcpy - for copying  memory area
 *description: this function for copying  memory area
 *@dest: the area destenation to fill in
 *@n: no of bytes to be filledibytes to be filled
 *@src: the source memory
 *Return: dest  succes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	for ( ; n; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}
