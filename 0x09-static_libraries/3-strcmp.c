#include "main.h"
/**
 *_strcmp - for cpy the string
 *description: this function for conactes two strings
 *@s1: the int pointer for a first string
 *@s2: the pointer for second string
 *Return: int sucess
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			x = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}
