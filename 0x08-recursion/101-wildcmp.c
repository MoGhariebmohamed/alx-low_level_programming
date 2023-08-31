#include "main.h"
/**
 *wildcmp - for compare two string
 *description: this function for coparing two strings
 *@s1: the pointer for first string
 *@s2: the pointer for second string
 *Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s1 == *s2)
	{
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	else 
	{
		return (0);
	}
}
