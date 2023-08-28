#include "main.h"
/**
 *_memset - for filling memory with constant
 *description: this function for filling memory with constant
 *@s: the pointer for area filling
 *@n: no of bytes to bbe filledibytes to be filled
 *@b: the constant to be filled
 *Return: s succes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x <= n; x++)
	{
		*s = b;
	}
	return (s);
}
