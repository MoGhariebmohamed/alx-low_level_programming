#include "main.h"
/**
 *_strlen_recursion - for length of string
 *description: this function for return length of a string
 *@s: string pointer
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s != '\0')
	{
		strlen++;
		strlen = _strlen_recursion(s + 1) + strlen;
	}
	return (strlen);
}
