#include "main.h"

/**
 *_isalpha - the main function to print lowercase alphapet
 *@c: is avriable to check
 *description: this function to print putchar
 *Return: 1 sucess for lower and upper, 0 for else
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
